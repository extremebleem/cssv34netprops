// CTEBreakModel, the table DT_TEBreakModel - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseTempEntity
// Server classes: CTEBreakModel
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CTEBreakModel : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_TEBreakModel)

    NETVAR_FIELD(Vector, m_vecOrigin) // 0xC, flags 0x2 SPROP_COORD
    NETVAR_FIELD(Vector, m_vecSize) // 0x18, flags 0x2 SPROP_COORD
    NETVAR_FIELD(Vector, m_vecVelocity) // 0x24, flags 0x2 SPROP_COORD
    NETVAR_FIELD_AS(float, m_angRotation_0_, "m_angRotation[0]") // 0x30, flags 0x800 SPROP_IS_A_VECTOR_ELEM
    NETVAR_FIELD_AS(float, m_angRotation_1_, "m_angRotation[1]") // 0x34, flags 0x800 SPROP_IS_A_VECTOR_ELEM
    NETVAR_FIELD_AS(float, m_angRotation_2_, "m_angRotation[2]") // 0x38, flags 0x800 SPROP_IS_A_VECTOR_ELEM
    NETVAR_FIELD(int32_t, m_nRandomization) // 0x3C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nModelIndex) // 0x40
    NETVAR_FIELD(int32_t, m_nCount) // 0x44, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_fTime) // 0x48
    NETVAR_FIELD(int32_t, m_nFlags) // 0x4C, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
