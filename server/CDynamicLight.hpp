// CDynamicLight, the table DT_DynamicLight - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseEntity
// Server classes: CDynamicLight
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CDynamicLight : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_DynamicLight)

    NETVAR_FIELD(int8_t, m_Flags) // 0x351, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_LightStyle) // 0x352, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_Radius) // 0x354, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(int32_t, m_Exponent) // 0x358
    NETVAR_FIELD(float, m_InnerAngle) // 0x35C
    NETVAR_FIELD(float, m_OuterAngle) // 0x360
    NETVAR_FIELD(float, m_SpotRadius) // 0x364, flags 0x4 SPROP_NOSCALE
};

} // namespace NetvarServer
