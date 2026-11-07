// CTEDynamicLight, the table DT_TEDynamicLight - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseTempEntity
// Server classes: CTEDynamicLight
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CTEDynamicLight : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_TEDynamicLight)

    NETVAR_FIELD(Vector, m_vecOrigin) // 0xC, flags 0x2 SPROP_COORD
    NETVAR_FIELD(float, m_fRadius) // 0x18, flags 0x10 SPROP_ROUNDUP
    NETVAR_FIELD(int32_t, r) // 0x1C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, g) // 0x20, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, b) // 0x24, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, exponent) // 0x28
    NETVAR_FIELD(float, m_fTime) // 0x2C, flags 0x8 SPROP_ROUNDDOWN
    NETVAR_FIELD(float, m_fDecay) // 0x30, flags 0x8 SPROP_ROUNDDOWN
};

} // namespace NetvarServer
