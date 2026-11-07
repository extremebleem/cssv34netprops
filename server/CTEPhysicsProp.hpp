// CTEPhysicsProp, the table DT_TEPhysicsProp - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseTempEntity
// Server classes: CTEPhysicsProp
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CTEPhysicsProp : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_TEPhysicsProp)

    NETVAR_FIELD(Vector, m_vecOrigin) // 0xC, flags 0x2 SPROP_COORD
    NETVAR_FIELD_AS(float, m_angRotation_0_, "m_angRotation[0]") // 0x18, flags 0x800 SPROP_IS_A_VECTOR_ELEM
    NETVAR_FIELD_AS(float, m_angRotation_1_, "m_angRotation[1]") // 0x1C, flags 0x800 SPROP_IS_A_VECTOR_ELEM
    NETVAR_FIELD_AS(float, m_angRotation_2_, "m_angRotation[2]") // 0x20, flags 0x800 SPROP_IS_A_VECTOR_ELEM
    NETVAR_FIELD(Vector, m_vecVelocity) // 0x24, flags 0x2 SPROP_COORD
    NETVAR_FIELD(int32_t, m_nModelIndex) // 0x30
    NETVAR_FIELD(int32_t, m_nSkin) // 0x34
    NETVAR_FIELD(int32_t, m_nFlags) // 0x38, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nEffects) // 0x3C, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
