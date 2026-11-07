// C_BaseGrenade, the table DT_BaseGrenade - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseCombatCharacter
// Client classes: CBaseGrenade
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_BaseGrenade : Base
{
    NETVAR_FRAGMENT(DT_BaseGrenade)

    NETVAR_FIELD(int32_t, m_fFlags) // 0x2B4
    NETVAR_FIELD(int8_t, m_bIsLive) // 0xB41
    NETVAR_FIELD(float, m_DmgRadius) // 0xB44
    NETVAR_FIELD(float, m_flDamage) // 0xB50
    NETVAR_FIELD(CBaseHandle, m_hThrower) // 0xB58
    // not generated: m_vecVelocity, 0xE0: custom proxy 0x24042DE0, the width of the variable is not known
};

} // namespace Netvar
