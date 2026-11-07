# cssv34netprops

The netvars of **Counter-Strike: Source v34** (game build `1.0.0.34`, `cstrike\steam.inf` `PatchVersion=1.0.0.34`) as C++ headers, for **both sides of the game**: `client/` has one class for each
receive table of the client, `server/` one class for each send table of the server. A class has one getter and one setter for each field. The offsets are not in the files. A file holds the name
of the table and the name of the field, and the offset is read from the game's own tables at run time.

The files were generated from the tables of the running game by a tool that is not part of this repository; it writes both folders in one run. Do not edit them by hand: they are data, and a file that is generated again replaces your edit.

| | |
|---|---|
| Game | Counter-Strike: Source v34, `PatchVersion=1.0.0.34` |
| `client.dll` MD5 | `1f999cb741c023cfd93efe426aacd567` |
| `server.dll` MD5 | `84f4e2082106dba8de0a8e1657f3f35c` |
| Dumped | 2026-11-08, local listen server on `de_dust2`, both sides in one run |
| Client | `client/`: 203 tables, 891 generated accessors: 870 fields and 21 sub-table pointers |
| Server | `server/`: 202 tables, 832 generated accessors: 812 fields and 20 sub-table pointers |
| Not generated | client: 74 props, server: 136 props; the reason for each is in `client/netvar_skipped.txt` and `server/netvar_skipped.txt` |

## The names

A class and its file are named for the **network class** that carries the table, so the name says the side:

| | client (`client/`) | server (`server/`) |
|---|---|---|
| a table that a network class carries | the network name with `C_` in place of `C`: `C_CSPlayer` (a name without a `C` gets `C_` in front: `C_RocketTrail`) | the network name: `CCSPlayer` |
| a table that no network class carries (a sub-table) | `DT_LocalPlayerExclusive` | `DT_LocalPlayerExclusive` |
| the table that a field asks the offset for | `DT_CSPlayer` | `server:DT_CSPlayer` |
| namespace | `Netvar` | `NetvarServer` |

The first line of a header says both names (`// C_CSPlayer, the table DT_CSPlayer - generated from ...`), and `// Client classes:` or `// Server classes:` lists the network names. A table that two or
more classes carry would be named for the first of them by name and list the others; no table of this build has two. Six client classes have another name in the SDK
(`CClient_Precipitation` for the network class `CPrecipitation`, `C_ServerRagdoll` for `CRagdollProp`, ...): the dump names them by the rule, and the network name in the header is the name that the game itself uses.

There are two namespaces because the same tables exist in both dumps at other offsets (`DT_BasePlayer.m_iHealth` is `0xDA4` on the client and `0x88` on the server), and a class of yours may embed one of each side.

## Use

The files hold the shape of the data and need a few things from you first. Put the root of this repository on the include path and write one header of your own (called `netvar_fields.hpp`
below) that provides:

- `<stdint.h>` (the headers use `int8_t`, `int16_t`, `int32_t` and the other fixed-width types by their global names), and the types `Vector` (three `float`s) and `CBaseHandle` (a 32-bit entity
  handle) that some fields use;
- in `namespace Netvar`, for both sides: `template <class> struct NoBase {};` (the default base of a class; it takes `Self` so that two classes in one object never have the same empty base) and `struct View {};`
  (the `Self` of a table that is seen through a pointer);
- the macros of the table below. They are used inside a class that is a *view* of the memory of a game object: the class has no data of its own, and `this` is the address of the object.

| Macro | Must expand to |
|---|---|
| `NETVAR_FRAGMENT(Table)` | the first line of every client class: `static constexpr const char* kNetvarTable = #Table;` |
| `NETVAR_FRAGMENT_AS(prefix, Table)` | the first line of every server class: `static constexpr const char* kNetvarTable = prefix #Table;`, with the prefix `"server:"` |
| `NETVAR_FIELD(type, name)` | `type name() const` (reads) and `void name(type)` (writes) at the offset of the field `name` in its table, and `static std::ptrdiff_t netvar_offset_<name>()` |
| `NETVAR_FIELD_AS(type, ident, "prop")` | the same, with the C++ name `ident` and the name `"prop"` that the game's table has (`"m_angEyeAngles[0]"` is not a C++ name) |
| `NETVAR_FIELD_ARRAY(type, name, count)` | `type name(int index) const` and `void name(int index, type)`; element `i` is at the offset of the field plus `i * sizeof(type)`; an index out of range reads zero and writes nothing |
| `NETVAR_FIELD_STRING(name, capacity)` | `const char* name() const` (points into the object) and `void name(const char*)` (copies, cut to `capacity - 1` characters, and zero-fills the rest of the buffer) |
| `NETVAR_TABLE(Class, name)` | client: `name()`, const and not const: a pointer to `Netvar::Class<Netvar::View, Netvar::NoBase<Netvar::View>>` (const on the const overload) at that place of the object, `nullptr` when the game has no such field. The header of `Class` must be included before the pointer is used: `netvar_tables.inc` only declares the class |
| `NETVAR_TABLE_NS(name_space, Class, name)` | the same in another namespace: the server's sub-tables are in `NetvarServer` |

The generated lines end without a `;`, so each expansion must end by itself.

The offsets are **not** in the files, so the macros need one more thing from you: a function `std::ptrdiff_t offset(const char* table, const char* prop)`. A table name that starts with `server:` goes to the
send tables of the server (the list that `IServerGameDLL::GetAllServerClasses` returns); every other name goes to the receive tables of the client (the list that `CHLClient::GetAllClasses` returns). The function finds the
table and the prop in it, and returns the byte offset of the prop **from the start of that table** (what `RecvProp::GetOffset` and `SendProp::GetOffset` give), or -1 when the game has no such table or prop
(or no `server.dll`: a client on a remote server). A macro calls it with `kNetvarTable` and the name of the field (the string literal of the `_AS` form), keeps the
offset once it is found, and asks again after a miss. When the game has no such field, a getter returns all bytes zero (an empty string, no pointer), a setter does nothing, and nothing throws.

Then a class of yours embeds the generated classes it needs. The parent of a table is in its header, in the comment `// Netvar parent: <class>`, and it is the next class in the chain; a header
with no such line is the root of a chain (46 of the 203 client tables are, and 57 of the 202 server tables). The chain of the player has seven classes on each side:

```cpp
#include <stdint.h>
#include "netvar_fields.hpp"               // yours: Vector, CBaseHandle, NoBase, View and the macros
#include "client/netvar_tables.inc"
#include "client/C_CSPlayer.hpp"
#include "client/C_BasePlayer.hpp"
#include "client/C_BaseCombatCharacter.hpp"
#include "client/C_BaseFlex.hpp"
#include "client/C_BaseAnimatingOverlay.hpp"
#include "client/C_BaseAnimating.hpp"
#include "client/C_BaseEntity.hpp"

class CSPlayerView : public Netvar::C_CSPlayer<CSPlayerView, Netvar::C_BasePlayer<CSPlayerView, Netvar::C_BaseCombatCharacter<CSPlayerView,
                                               Netvar::C_BaseFlex<CSPlayerView, Netvar::C_BaseAnimatingOverlay<CSPlayerView, Netvar::C_BaseAnimating<CSPlayerView,
                                               Netvar::C_BaseEntity<CSPlayerView>>>>>>> {};

// player->m_iHealth()      reads
// player->m_iHealth(100)   writes
```

The server's player is the same chain in `NetvarServer`, from `server/netvar_tables.inc` and the files `server/CCSPlayer.hpp` > `CBasePlayer` > `CBaseCombatCharacter` > `CBaseFlex` > `CBaseAnimatingOverlay` > `CBaseAnimating` > `CBaseEntity`.

A class that leaves a table out of its chain has no fields of that table (without `C_BaseAnimating` there is no `m_flPoseParameter`).

The rules of a field (what it reads when the game has no such field, what is not generated, the tables that only the local player gets) are below, in "Know before you use it".

## Files

Each of the two folders has the same four kinds of file:

| File | |
|---|---|
| `<Class>.hpp` | the class of one table, or `DT_<Table>.hpp` for a table that no network class carries; the offsets in its comments are from the start of the table |
| `netvar_tables.inc` | forward declarations of every class, and the macro that lists every class and its table: `NETVAR_FOR_EACH_TABLE(X)` on the client and `NETVAR_FOR_EACH_SERVER_TABLE(X)` on the server, each calls `X(Class, Table)` |
| `netvar_all.hpp` | includes every class of the folder |
| `netvar_skipped.txt` | the props that were not generated, and why, by class: `C_BasePlayer.m_iFOV 0xD1C ...` |

The client lists 74 props: a custom receive proxy, so the width of the variable is not known (61); offset 0 in the table of an entity, a value that only its proxy stores (8); a variable-length array (2); a table behind a
custom proxy (1); an array of a custom proxy (1); an array of prop type 3 (1). The server lists 136: the same 61 custom proxies, with the reason of the receive tables quoted; the 21 props that another table hides
(`SPROP_EXCLUDE`); and the props whose width or whose place in the object a send prop does not say and the receive tables do not know (an int, a string, an array, a sub-table).

## How the files were made

A tool walked the client classes of the running game and their receive tables, and then the server classes and their send tables, and wrote one header for each table, `netvar_tables.inc`, `netvar_all.hpp` and `netvar_skipped.txt`
into the folder of each side. The tool is not part of this repository. This is what it did, for anyone who writes one:

- A header starts with the line `// <Class>, the table <Table> - generated from the receive tables of the game, do not edit.` (`... from the send tables of the server ...` on the server). The tool recognised its own
  files by the marker of that line, removed the headers of an earlier run that the game no longer has (in the folder of its side), and left any other file.
- It ran after the client had loaded a map once: the engine sets up the array props of a receive table when the client first receives the server's send tables. The server's tables need a `server.dll`, so the run
  was on a local listen server.
- A send prop does not say how wide a value is (it says how many bits go on the wire). The width of a server field comes from the receive table of the same name, and the offset from the send table; a prop that the
  receive tables do not have is listed in `server/netvar_skipped.txt`, never guessed.

## Know before you use it

- **The integers are signed.** A receive prop does not say whether a variable is unsigned, so the dump has no `uint*` field: a byte mask is `int8_t`. When you know that the game
  uses a variable as unsigned (`m_nRenderFX`), cast the value, or declare the field by hand. The server's headers add what the send prop says in a comment (`flags 0x1 SPROP_UNSIGNED`), which does not change the type.
- **A missing field reads all bytes zero.** For a `Vector` that is (0, 0, 0); for a `CBaseHandle` it is the raw zero (entry 0, serial 0), not an invalid handle. Ask
  `Class::netvar_offset_<name>()` (below zero when the game has no such field) before you trust a handle.
- **A table behind a custom proxy is not inline in its object**, so it is not a field: `cs_gamerules_data` of `DT_CSGameRulesProxy` hands out `CSGameRules()`. It is listed in
  the file of skipped props, and the class `DT_CSGameRules` is generated for the object that the proxy returns.
- The tables whose name has "Local" in it (`DT_LocalPlayerExclusive`, `DT_LocalWeaponData`, ...) are sent to the owner of the entity only: right for the local player. The exception is
  `DT_CSNonLocalPlayerExclusive` (the field `csnonlocaldata` of the player): it is the table that the other players get.
- **The client's and the server's table of one name are two layouts.** Use the classes of the side whose object you hold.

## Checked

The field lines of this dump (the type, the name and the offset comment of every `NETVAR_FIELD*` and `NETVAR_TABLE*` line) are the same as the lines of the earlier dumps of this build: client 891 lines, server 832, 0 different
(a comparison of the sorted lines; the earlier client dump was in the folder `netvars/`). Those earlier dumps were compared with a separate walk of the same tables in the running game: for the client, 14 classes (`DT_CSPlayer`,
`DT_BasePlayer`, `DT_BaseCombatCharacter`, `DT_BaseAnimating`, `DT_BaseEntity`, `DT_WeaponCSBase`, `DT_BaseCombatWeapon`, `DT_BaseViewModel`, `DT_CSPlayerResource`, `DT_PlantedC4`, `DT_CSTeam`, `DT_Team`,
`DT_CSRagdoll`, `DT_CSGameRulesProxy`) with the offsets of the parents and sub-tables added up, 560 fields, 0 different (2026-11-05); for the server, every field, 812 fields, 0 different (2026-11-06). This dump was not walked
again. Not checked: the values that the classes read in the game, and the type of a field that a custom proxy stores.

## License

Public domain ([The Unlicense](LICENSE)). The tables belong to the game.
