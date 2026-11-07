// CTEBloodStream, the table DT_TEBloodStream - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CTEParticleSystem
// Server classes: CTEBloodStream
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CTEBloodStream : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_TEBloodStream)

    NETVAR_FIELD(Vector, m_vecDirection) // 0x18
    NETVAR_FIELD(int32_t, r) // 0x24, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, g) // 0x28, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, b) // 0x2C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, a) // 0x30, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nAmount) // 0x34, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
