// C_TEPhysicsProp, the table DT_TEPhysicsProp - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseTempEntity
// Client classes: CTEPhysicsProp
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_TEPhysicsProp : Base
{
    NETVAR_FRAGMENT(DT_TEPhysicsProp)

    NETVAR_FIELD(Vector, m_vecOrigin) // 0x10
    NETVAR_FIELD_AS(float, m_angRotation_0_, "m_angRotation[0]") // 0x1C
    NETVAR_FIELD_AS(float, m_angRotation_1_, "m_angRotation[1]") // 0x20
    NETVAR_FIELD_AS(float, m_angRotation_2_, "m_angRotation[2]") // 0x24
    NETVAR_FIELD(Vector, m_vecVelocity) // 0x28
    NETVAR_FIELD(int32_t, m_nModelIndex) // 0x34
    NETVAR_FIELD(int32_t, m_nSkin) // 0x38
    NETVAR_FIELD(int32_t, m_nFlags) // 0x3C
    NETVAR_FIELD(int32_t, m_nEffects) // 0x40
};

} // namespace Netvar
