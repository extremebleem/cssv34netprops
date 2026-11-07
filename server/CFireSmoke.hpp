// CFireSmoke, the table DT_FireSmoke - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseEntity
// Server classes: CFireSmoke
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CFireSmoke : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_FireSmoke)

    NETVAR_FIELD(float, m_flStartScale) // 0x350, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(int32_t, m_nFlags) // 0x35C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nFlameModelIndex) // 0x360
    NETVAR_FIELD(int32_t, m_nFlameFromAboveModelIndex) // 0x364
    // not generated: m_flScale, 0x354: the receive tables of the game list it: custom proxy 0x2405B860, the width of the variable is not known
    // not generated: m_flScaleTime, 0x358: the receive tables of the game list it: custom proxy 0x2405B8B0, the width of the variable is not known
};

} // namespace NetvarServer
