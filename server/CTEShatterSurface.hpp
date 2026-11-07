// CTEShatterSurface, the table DT_TEShatterSurface - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseTempEntity
// Server classes: CTEShatterSurface
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CTEShatterSurface : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_TEShatterSurface)

    NETVAR_FIELD(Vector, m_vecOrigin) // 0xC, flags 0x2 SPROP_COORD
    NETVAR_FIELD(Vector, m_vecAngles) // 0x18, flags 0x2 SPROP_COORD
    NETVAR_FIELD(Vector, m_vecForce) // 0x24, flags 0x2 SPROP_COORD
    NETVAR_FIELD(Vector, m_vecForcePos) // 0x30, flags 0x2 SPROP_COORD
    NETVAR_FIELD(float, m_flWidth) // 0x3C, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flHeight) // 0x40, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flShardSize) // 0x44, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(int32_t, m_nSurfaceType) // 0x48, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD_AS(int8_t, m_uchFrontColor_0_, "m_uchFrontColor[0]") // 0x4C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD_AS(int8_t, m_uchFrontColor_1_, "m_uchFrontColor[1]") // 0x4D, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD_AS(int8_t, m_uchFrontColor_2_, "m_uchFrontColor[2]") // 0x4E, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD_AS(int8_t, m_uchBackColor_0_, "m_uchBackColor[0]") // 0x4F, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD_AS(int8_t, m_uchBackColor_1_, "m_uchBackColor[1]") // 0x50, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD_AS(int8_t, m_uchBackColor_2_, "m_uchBackColor[2]") // 0x51, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
