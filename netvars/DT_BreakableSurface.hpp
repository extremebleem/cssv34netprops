// DT_BreakableSurface - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseEntity
// Client classes: CBreakableSurface
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_BreakableSurface : Base
{
    NETVAR_FRAGMENT(DT_BreakableSurface)

    NETVAR_FIELD(int32_t, m_nNumWide) // 0x464
    NETVAR_FIELD(int32_t, m_nNumHigh) // 0x468
    NETVAR_FIELD(float, m_flPanelWidth) // 0x46C
    NETVAR_FIELD(float, m_flPanelHeight) // 0x470
    NETVAR_FIELD(Vector, m_vNormal) // 0x474
    NETVAR_FIELD(Vector, m_vCorner) // 0x480
    NETVAR_FIELD(int8_t, m_bIsBroken) // 0x48C
    NETVAR_FIELD(int32_t, m_nSurfaceType) // 0x490
    NETVAR_FIELD_ARRAY(int8_t, m_RawPanelBitVec, 256) // 0x4B4, int8_t[256]
};

} // namespace Netvar
