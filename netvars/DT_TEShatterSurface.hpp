// DT_TEShatterSurface - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseTempEntity
// Client classes: CTEShatterSurface
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_TEShatterSurface : Base
{
    NETVAR_FRAGMENT(DT_TEShatterSurface)

    NETVAR_FIELD(Vector, m_vecOrigin) // 0x10
    NETVAR_FIELD(Vector, m_vecAngles) // 0x1C
    NETVAR_FIELD(Vector, m_vecForce) // 0x28
    NETVAR_FIELD(Vector, m_vecForcePos) // 0x34
    NETVAR_FIELD(float, m_flWidth) // 0x40
    NETVAR_FIELD(float, m_flHeight) // 0x44
    NETVAR_FIELD(float, m_flShardSize) // 0x48
    NETVAR_FIELD(int32_t, m_nSurfaceType) // 0x50
    NETVAR_FIELD_AS(int8_t, m_uchFrontColor_0_, "m_uchFrontColor[0]") // 0x54
    NETVAR_FIELD_AS(int8_t, m_uchFrontColor_1_, "m_uchFrontColor[1]") // 0x55
    NETVAR_FIELD_AS(int8_t, m_uchFrontColor_2_, "m_uchFrontColor[2]") // 0x56
    NETVAR_FIELD_AS(int8_t, m_uchBackColor_0_, "m_uchBackColor[0]") // 0x57
    NETVAR_FIELD_AS(int8_t, m_uchBackColor_1_, "m_uchBackColor[1]") // 0x58
    NETVAR_FIELD_AS(int8_t, m_uchBackColor_2_, "m_uchBackColor[2]") // 0x59
};

} // namespace Netvar
