// CPlayerResource, the table DT_PlayerResource - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Server classes: CPlayerResource
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CPlayerResource : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_PlayerResource)

    NETVAR_FIELD_ARRAY(int32_t, m_iPing, 65) // 0x350, flags 0x200 SPROP_PROXY_ALWAYS_YES, int32_t[65]
    NETVAR_FIELD_ARRAY(int32_t, m_iScore, 65) // 0x454, flags 0x200 SPROP_PROXY_ALWAYS_YES, int32_t[65]
    NETVAR_FIELD_ARRAY(int32_t, m_iDeaths, 65) // 0x558, flags 0x200 SPROP_PROXY_ALWAYS_YES, int32_t[65]
    NETVAR_FIELD_ARRAY(int32_t, m_iTeam, 65) // 0x760, flags 0x200 SPROP_PROXY_ALWAYS_YES, int32_t[65]
    NETVAR_FIELD_ARRAY(int32_t, m_iHealth, 65) // 0x968, flags 0x200 SPROP_PROXY_ALWAYS_YES, int32_t[65]
    // not generated: m_bConnected, 0x65C: an array of tables whose elements are not one stride of the element apart
    // not generated: m_bAlive, 0x864: an array of tables whose elements are not one stride of the element apart
};

} // namespace NetvarServer
