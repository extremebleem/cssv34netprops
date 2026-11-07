// CBreakableSurface, the table DT_BreakableSurface - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseEntity
// Server classes: CBreakableSurface
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CBreakableSurface : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_BreakableSurface)

    NETVAR_FIELD(int32_t, m_nNumWide) // 0x3FC, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nNumHigh) // 0x400, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_flPanelWidth) // 0x404, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flPanelHeight) // 0x408, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(Vector, m_vNormal) // 0x40C, flags 0x2 SPROP_COORD
    NETVAR_FIELD(Vector, m_vCorner) // 0x418, flags 0x2 SPROP_COORD
    NETVAR_FIELD(int8_t, m_bIsBroken) // 0x424, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nSurfaceType) // 0x428, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD_ARRAY(int8_t, m_RawPanelBitVec, 256) // 0x868, flags 0x200 SPROP_PROXY_ALWAYS_YES, int8_t[256]
};

} // namespace NetvarServer
