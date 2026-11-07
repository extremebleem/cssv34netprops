// CTEExplosion, the table DT_TEExplosion - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CTEParticleSystem
// Server classes: CTEExplosion
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CTEExplosion : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_TEExplosion)

    NETVAR_FIELD(int32_t, m_nModelIndex) // 0x18
    NETVAR_FIELD(float, m_fScale) // 0x1C
    NETVAR_FIELD(int32_t, m_nFrameRate) // 0x20, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nFlags) // 0x24, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(Vector, m_vecNormal) // 0x28, flags 0x2 SPROP_COORD
    NETVAR_FIELD(int8_t, m_chMaterialType) // 0x34, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nRadius) // 0x38, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nMagnitude) // 0x3C, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
