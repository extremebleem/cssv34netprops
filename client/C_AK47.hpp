// C_AK47, the table DT_WeaponAK47 - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_WeaponCSBaseGun
// Client classes: CAK47
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_AK47 : Base
{
    NETVAR_FRAGMENT(DT_WeaponAK47)
};

} // namespace Netvar
