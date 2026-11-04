// DT_WeaponXM1014 - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_WeaponCSBase
// Client classes: CWeaponXM1014
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_WeaponXM1014 : Base
{
    NETVAR_FRAGMENT(DT_WeaponXM1014)

    NETVAR_FIELD(int32_t, m_fInSpecialReload) // 0x77C
};

} // namespace Netvar
