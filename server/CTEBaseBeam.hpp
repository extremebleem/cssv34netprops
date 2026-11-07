// CTEBaseBeam, the table DT_BaseBeam - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Server classes: CTEBaseBeam
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CTEBaseBeam : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_BaseBeam)

    NETVAR_FIELD(int32_t, m_nModelIndex) // 0xC
    NETVAR_FIELD(int32_t, m_nHaloIndex) // 0x10
    NETVAR_FIELD(int32_t, m_nStartFrame) // 0x14, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nFrameRate) // 0x18, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_fLife) // 0x1C
    NETVAR_FIELD(float, m_fWidth) // 0x20
    NETVAR_FIELD(float, m_fEndWidth) // 0x24
    NETVAR_FIELD(int32_t, m_nFadeLength) // 0x28, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_fAmplitude) // 0x2C
    NETVAR_FIELD(int32_t, r) // 0x30, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, g) // 0x34, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, b) // 0x38, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, a) // 0x3C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nSpeed) // 0x40, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nFlags) // 0x44, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
