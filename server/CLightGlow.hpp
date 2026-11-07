// CLightGlow, the table DT_LightGlow - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Server classes: CLightGlow
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CLightGlow : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_LightGlow)

    NETVAR_FIELD(int32_t, m_spawnflags) // 0xA4, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(Vector, m_vecOrigin) // 0x31C, flags 0x2 SPROP_COORD
    NETVAR_FIELD(Vector, m_angRotation) // 0x328
    NETVAR_FIELD(int32_t, m_nHorizontalSize) // 0x350, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nVerticalSize) // 0x354, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nMinDist) // 0x358, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nMaxDist) // 0x35C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nOuterMaxDist) // 0x360, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_flGlowProxySize) // 0x364, flags 0x10 SPROP_ROUNDUP
    // not generated: m_clrRender, 0x20: the receive tables of the game list it: custom proxy 0x24139ED0, the width of the variable is not known
    // not generated: moveparent, 0xE0: the receive tables of the game list it: custom proxy 0x2413A090, the width of the variable is not known
    // not generated: HDRColorScale, 0x368: the receive tables of the game list it: custom proxy 0x240689C0, the width of the variable is not known
};

} // namespace NetvarServer
