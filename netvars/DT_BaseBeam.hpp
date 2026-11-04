// DT_BaseBeam - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Client classes: CTEBaseBeam
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_BaseBeam : Base
{
    NETVAR_FRAGMENT(DT_BaseBeam)

    NETVAR_FIELD(int32_t, m_nModelIndex) // 0x10
    NETVAR_FIELD(int32_t, m_nHaloIndex) // 0x14
    NETVAR_FIELD(int32_t, m_nStartFrame) // 0x18
    NETVAR_FIELD(int32_t, m_nFrameRate) // 0x1C
    NETVAR_FIELD(float, m_fLife) // 0x20
    NETVAR_FIELD(float, m_fWidth) // 0x24
    NETVAR_FIELD(float, m_fEndWidth) // 0x28
    NETVAR_FIELD(int32_t, m_nFadeLength) // 0x2C
    NETVAR_FIELD(float, m_fAmplitude) // 0x30
    NETVAR_FIELD(int32_t, r) // 0x34
    NETVAR_FIELD(int32_t, g) // 0x38
    NETVAR_FIELD(int32_t, b) // 0x3C
    NETVAR_FIELD(int32_t, a) // 0x40
    NETVAR_FIELD(int32_t, m_nSpeed) // 0x44
    NETVAR_FIELD(int32_t, m_nFlags) // 0x48
};

} // namespace Netvar
