// CSun, the table DT_Sun - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Server classes: CSun
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CSun : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_Sun)

    NETVAR_FIELD(Vector, m_vDirection) // 0x350, flags 0x20 SPROP_NORMAL
    NETVAR_FIELD(int32_t, m_nSize) // 0x370, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nOverlaySize) // 0x374, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_bOn) // 0x37C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nMaterial) // 0x380, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nOverlayMaterial) // 0x384, flags 0x1 SPROP_UNSIGNED
    // not generated: m_clrRender, 0x20: the receive tables of the game list it: custom proxy 0x24139ED0, the width of the variable is not known
    // not generated: m_clrOverlay, 0x378: the receive tables of the game list it: custom proxy 0x24139ED0, the width of the variable is not known
    // not generated: HDRColorScale, 0x388: the receive tables of the game list it: custom proxy 0x2407F1F0, the width of the variable is not known
};

} // namespace NetvarServer
