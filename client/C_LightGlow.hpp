// C_LightGlow, the table DT_LightGlow - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Client classes: CLightGlow
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_LightGlow : Base
{
    NETVAR_FRAGMENT(DT_LightGlow)

    NETVAR_FIELD(Vector, m_vecOrigin) // 0x29C
    NETVAR_FIELD(Vector, m_angRotation) // 0x2A8
    NETVAR_FIELD(int32_t, m_nHorizontalSize) // 0x460
    NETVAR_FIELD(int32_t, m_nVerticalSize) // 0x464
    NETVAR_FIELD(int32_t, m_nMinDist) // 0x468
    NETVAR_FIELD(int32_t, m_nMaxDist) // 0x46C
    NETVAR_FIELD(int32_t, m_nOuterMaxDist) // 0x470
    NETVAR_FIELD(int32_t, m_spawnflags) // 0x474
    NETVAR_FIELD(float, m_flGlowProxySize) // 0x544
    // not generated: m_clrRender, 0x58: custom proxy 0x24139ED0, the width of the variable is not known
    // not generated: moveparent, 0x154: custom proxy 0x2413A090, the width of the variable is not known
    // not generated: HDRColorScale, 0x0: custom proxy 0x240689C0, the width of the variable is not known
};

} // namespace Netvar
