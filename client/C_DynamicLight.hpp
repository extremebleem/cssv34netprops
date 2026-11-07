// C_DynamicLight, the table DT_DynamicLight - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseEntity
// Client classes: CDynamicLight
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_DynamicLight : Base
{
    NETVAR_FRAGMENT(DT_DynamicLight)

    NETVAR_FIELD(int8_t, m_Flags) // 0x460
    NETVAR_FIELD(int8_t, m_LightStyle) // 0x461
    NETVAR_FIELD(float, m_Radius) // 0x464
    NETVAR_FIELD(int32_t, m_Exponent) // 0x468
    NETVAR_FIELD(float, m_InnerAngle) // 0x46C
    NETVAR_FIELD(float, m_OuterAngle) // 0x470
    NETVAR_FIELD(float, m_SpotRadius) // 0x474
};

} // namespace Netvar
