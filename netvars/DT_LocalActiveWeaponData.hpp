// DT_LocalActiveWeaponData - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_LocalActiveWeaponData : Base
{
    NETVAR_FRAGMENT(DT_LocalActiveWeaponData)

    NETVAR_FIELD(int32_t, m_nNextThinkTick) // 0x7C
    NETVAR_FIELD(float, m_flNextPrimaryAttack) // 0x6B8
    NETVAR_FIELD(float, m_flNextSecondaryAttack) // 0x6BC
    NETVAR_FIELD(float, m_flTimeWeaponIdle) // 0x6C0
};

} // namespace Netvar
