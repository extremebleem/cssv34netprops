// DT_Sun - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Client classes: CSun
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_Sun : Base
{
    NETVAR_FRAGMENT(DT_Sun)

    NETVAR_FIELD(int32_t, m_nSize) // 0x5B4
    NETVAR_FIELD(int32_t, m_nOverlaySize) // 0x5B8
    NETVAR_FIELD(Vector, m_vDirection) // 0x5BC
    NETVAR_FIELD(int8_t, m_bOn) // 0x5C8
    NETVAR_FIELD(int32_t, m_nMaterial) // 0x5CC
    NETVAR_FIELD(int32_t, m_nOverlayMaterial) // 0x5D0
    // not generated: m_clrRender, 0x58: custom proxy 0x24139ED0, the width of the variable is not known
    // not generated: m_clrOverlay, 0x5B0: custom proxy 0x24139ED0, the width of the variable is not known
    // not generated: HDRColorScale, 0x0: custom proxy 0x2407F1F0, the width of the variable is not known
};

} // namespace Netvar
