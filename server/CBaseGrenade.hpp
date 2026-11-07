// CBaseGrenade, the table DT_BaseGrenade - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseCombatCharacter
// Server classes: CBaseGrenade
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CBaseGrenade : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_BaseGrenade)

    NETVAR_FIELD(int32_t, m_fFlags) // 0xAC, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_bIsLive) // 0x771, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_DmgRadius) // 0x774, flags 0x8 SPROP_ROUNDDOWN
    NETVAR_FIELD(float, m_flDamage) // 0x780, flags 0x8 SPROP_ROUNDDOWN
    NETVAR_FIELD(CBaseHandle, m_hThrower) // 0x788, flags 0x5 SPROP_UNSIGNED|SPROP_NOSCALE
    // not generated: m_vecVelocity, 0x2A0: the receive tables of the game list it: custom proxy 0x24042DE0, the width of the variable is not known
};

} // namespace NetvarServer
