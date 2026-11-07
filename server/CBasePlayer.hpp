// CBasePlayer, the table DT_BasePlayer - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseCombatCharacter
// Server classes: CBasePlayer
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CBasePlayer : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_BasePlayer)

    NETVAR_TABLE_NS(NetvarServer, DT_LocalPlayerExclusive, localdata) // 0x0
    NETVAR_FIELD(int32_t, m_iHealth) // 0x88
    NETVAR_FIELD(int8_t, m_lifeState) // 0x8C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_fFlags) // 0xAC, flags 0x401 SPROP_UNSIGNED|SPROP_CHANGES_OFTEN
    NETVAR_TABLE_NS(NetvarServer, DT_PlayerState, pl) // 0x924, flags 0x200 SPROP_PROXY_ALWAYS_YES
    NETVAR_FIELD(CBaseHandle, m_hUseEntity) // 0x9B4, flags 0x5 SPROP_UNSIGNED|SPROP_NOSCALE
    NETVAR_FIELD(CBaseHandle, m_hVehicle) // 0x9C4, flags 0x5 SPROP_UNSIGNED|SPROP_NOSCALE
    NETVAR_FIELD(int32_t, m_iObserverMode) // 0x9F0, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_flMaxspeed) // 0xC58, flags 0x8 SPROP_ROUNDDOWN
    NETVAR_FIELD_STRING(m_szLastPlaceName, 18) // 0xD3C, char[18]
    // not generated: m_hObserverTarget, 0xA00: the receive tables of the game list it: custom proxy 0x240524E0, the width of the variable is not known
    // not generated: m_iFOV, 0x9F4: the receive tables of the game list it: custom proxy 0x240518B0, the width of the variable is not known
    // not generated: m_iDefaultFOV, 0x9F8: the receive tables of the game list it: custom proxy 0x24051910, the width of the variable is not known
    // not generated: m_hViewModel, 0x0: a send prop of an array says the stride of its elements, not the type of one element, and the receive tables of the game have no such field
};

} // namespace NetvarServer
