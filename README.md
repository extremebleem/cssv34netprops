# cssv34netprops

The netvars of **Counter-Strike: Source v34** (game build `1.0.0.34`, `cstrike\steam.inf` `PatchVersion=1.0.0.34`) as C++ headers: one class for each receive table of the
game, one getter and one setter for each field. The offsets are not in the files. A file holds the name of the table and the name of the field, and the offset is read from
the game's own receive tables at run time.

The files were generated from the receive tables of the game's client by a tool that is not part of this repository. Do not edit them by hand: they are data, and a file that is generated again replaces your edit.

| | |
|---|---|
| Game | Counter-Strike: Source v34, `PatchVersion=1.0.0.34` |
| `client.dll` MD5 | `1f999cb741c023cfd93efe426aacd567` |
| Dumped | 2026-11-05, local server on `de_dust2` |
| Tables | 203 (`netvars/DT_*.hpp`), 891 generated accessors: 870 fields and 21 sub-table pointers |
| Not generated | 74 props, listed with the reason in `netvars/netvar_skipped.txt` |

## Use

The files hold the shape of the data and need a few things from you first. Put the root of this repository on the include path and write one header of your own (called `netvar_fields.hpp`
below) that provides:

- `<stdint.h>` (the headers use `int8_t`, `int16_t`, `int32_t` and the other fixed-width types by their global names), and the types `Vector` (three `float`s) and `CBaseHandle` (a 32-bit entity
  handle) that some fields use;
- in `namespace Netvar`: `template <class> struct NoBase {};` (the default base of a class; it takes `Self` so that two classes in one object never have the same empty base) and `struct View {};`
  (the `Self` of a table that is seen through a pointer);
- the macros of the table below. They are used inside a class that is a *view* of the memory of a game object: the class has no data of its own, and `this` is the address of the object.

| Macro | Must expand to |
|---|---|
| `NETVAR_FRAGMENT(Table)` | the first line of every class: `static constexpr const char* kNetvarTable = #Table;` |
| `NETVAR_FIELD(type, name)` | `type name() const` (reads) and `void name(type)` (writes) at the offset of the field `name` in its table, and `static std::ptrdiff_t netvar_offset_<name>()` |
| `NETVAR_FIELD_AS(type, ident, "prop")` | the same, with the C++ name `ident` and the name `"prop"` that the game's table has (`"m_angEyeAngles[0]"` is not a C++ name) |
| `NETVAR_FIELD_ARRAY(type, name, count)` | `type name(int index) const` and `void name(int index, type)`; element `i` is at the offset of the field plus `i * sizeof(type)`; an index out of range reads zero and writes nothing |
| `NETVAR_FIELD_STRING(name, capacity)` | `const char* name() const` (points into the object) and `void name(const char*)` (copies, cut to `capacity - 1` characters, and zero-fills the rest of the buffer) |
| `NETVAR_TABLE(Table, name)` | `name()`, const and not const: a pointer to `Netvar::Table<Netvar::View, Netvar::NoBase<Netvar::View>>` (const on the const overload) at that place of the object, `nullptr` when the game has no such field. The header of `Table` must be included before the pointer is used: `netvar_tables.inc` only declares the class |

The generated lines end without a `;`, so each expansion must end by itself.

The offsets are **not** in the files, so the macros need one more thing from you: a function `std::ptrdiff_t offset(const char* table, const char* prop)`. It walks the client classes of the running
game (the list that `CHLClient::GetAllClasses` returns) and their `RecvTable`s, finds the table named `table` and the prop named `prop` in it, and returns the byte offset of the prop **from the start of that
table** (what `RecvProp::GetOffset` gives), or -1 when the game has no such table or prop. A macro calls it with `kNetvarTable` and the name of the field (the string literal of the `_AS` form), keeps the
offset once it is found, and asks again after a miss. When the game has no such field, a getter returns all bytes zero (an empty string, no pointer), a setter does nothing, and nothing throws.

Then a class of yours embeds the generated classes it needs. The parent of a table is in its header, in the comment `// Netvar parent: <table>`, and it is the next class in the chain; a header
with no such line is the root of a chain (46 of the 203 tables are). The chain of `DT_CSPlayer` has seven classes:

```cpp
#include <stdint.h>
#include "netvar_fields.hpp"               // yours: Vector, CBaseHandle, NoBase, View and the macros
#include "netvars/netvar_tables.inc"
#include "netvars/DT_CSPlayer.hpp"
#include "netvars/DT_BasePlayer.hpp"
#include "netvars/DT_BaseCombatCharacter.hpp"
#include "netvars/DT_BaseFlex.hpp"
#include "netvars/DT_BaseAnimatingOverlay.hpp"
#include "netvars/DT_BaseAnimating.hpp"
#include "netvars/DT_BaseEntity.hpp"

class CSPlayerView : public Netvar::DT_CSPlayer<CSPlayerView, Netvar::DT_BasePlayer<CSPlayerView, Netvar::DT_BaseCombatCharacter<CSPlayerView,
                                               Netvar::DT_BaseFlex<CSPlayerView, Netvar::DT_BaseAnimatingOverlay<CSPlayerView, Netvar::DT_BaseAnimating<CSPlayerView,
                                               Netvar::DT_BaseEntity<CSPlayerView>>>>>>> {};

// player->m_iHealth()      reads
// player->m_iHealth(100)   writes
```

A class that leaves a table out of its chain has no fields of that table (without `DT_BaseAnimating` there is no `m_flPoseParameter`).

The rules of a field (what it reads when the game has no such field, what is not generated, the tables that only the local player gets) are below, in "Know before you use it".

## Files

| File | |
|---|---|
| `netvars/<Table>.hpp` | the class of one receive table; the offsets in its comments are from the start of the table |
| `netvars/netvar_tables.inc` | forward declarations of every class, and `NETVAR_FOR_EACH_TABLE(X)` |
| `netvars/netvar_all.hpp` | includes every class |
| `netvars/netvar_skipped.txt` | the 74 props that were not generated, and why: a custom receive proxy, so the width of the variable is not known (61); offset 0 in the table of an entity, a value that only its proxy stores (8); a variable-length array (2); a table behind a custom proxy (1); an array of a custom proxy (1); an array of prop type 3 (1) |

## How the files were made

A tool walked the client classes of the running game and their receive tables, and wrote one header for each table, `netvar_tables.inc`, `netvar_all.hpp` and `netvar_skipped.txt`. The tool is not
part of this repository. This is what it did, for anyone who writes one:

- A header starts with the line `// <Table> - generated from the receive tables of the game, do not edit.` The tool recognised its own files by that line, removed the headers of an earlier run that the
  game no longer has, and left any other file.
- It ran after the client had loaded a map once: the engine sets up the array props of a receive table when the client first receives the server's send tables.

## Know before you use it

- **The integers are signed.** A client receive prop does not say whether a variable is unsigned, so the dump has no `uint*` field: a byte mask is `int8_t`. When you know that the game
  uses a variable as unsigned (`m_nRenderFX`), cast the value, or declare the field by hand.
- **A missing field reads all bytes zero.** For a `Vector` that is (0, 0, 0); for a `CBaseHandle` it is the raw zero (entry 0, serial 0), not an invalid handle. Ask
  `Class::netvar_offset_<name>()` (below zero when the game has no such field) before you trust a handle.
- **A table behind a custom proxy is not inline in its object**, so it is not a field: `cs_gamerules_data` of `DT_CSGameRulesProxy` hands out `CSGameRules()`. It is listed in
  `netvar_skipped.txt`, and the class `DT_CSGameRules` is generated for the object that the proxy returns.
- The tables whose name has "Local" in it (`DT_LocalPlayerExclusive`, `DT_LocalWeaponData`, ...) are sent to the owner of the entity only: right for the local player. The exception is
  `DT_CSNonLocalPlayerExclusive` (the field `csnonlocaldata` of `DT_CSPlayer`): it is the table that the other players get.

## Checked

For 14 classes (`DT_CSPlayer`, `DT_BasePlayer`, `DT_BaseCombatCharacter`, `DT_BaseAnimating`, `DT_BaseEntity`, `DT_WeaponCSBase`, `DT_BaseCombatWeapon`, `DT_BaseViewModel`, `DT_CSPlayerResource`,
`DT_PlantedC4`, `DT_CSTeam`, `DT_Team`, `DT_CSRagdoll`, `DT_CSGameRulesProxy`) every generated field, with the offsets of the parents and sub-tables added up, equals the row of a
separate walk of the same tables in the running game (560 fields, 0 different). Not checked: the values that the classes read in the game, and the type of a field that a custom proxy stores.

## License

Public domain ([The Unlicense](LICENSE)). The tables belong to the game.
