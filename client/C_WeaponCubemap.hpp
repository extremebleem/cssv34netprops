// C_WeaponCubemap, the table DT_WeaponCubemap - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseCombatWeapon
// Client classes: CWeaponCubemap
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_WeaponCubemap : Base
{
    NETVAR_FRAGMENT(DT_WeaponCubemap)
};

} // namespace Netvar
