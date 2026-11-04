// DT_BaseCombatWeapon - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseAnimating
// Client classes: CBaseCombatWeapon
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_BaseCombatWeapon : Base
{
    NETVAR_FRAGMENT(DT_BaseCombatWeapon)

    NETVAR_TABLE(DT_LocalWeaponData, LocalWeaponData) // 0x0
    NETVAR_TABLE(DT_LocalActiveWeaponData, LocalActiveWeaponData) // 0x0
    NETVAR_FIELD(CBaseHandle, m_hOwner) // 0x6B0
    NETVAR_FIELD(int32_t, m_iViewModelIndex) // 0x6C8
    NETVAR_FIELD(int32_t, m_iWorldModelIndex) // 0x6CC
    NETVAR_FIELD(int32_t, m_iState) // 0x6EC
};

} // namespace Netvar
