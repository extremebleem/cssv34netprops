// CTEDust, the table DT_TEDust - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CTEParticleSystem
// Server classes: CTEDust
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CTEDust : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_TEDust)

    NETVAR_FIELD(float, m_flSize) // 0x18, flags 0x2 SPROP_COORD
    NETVAR_FIELD(float, m_flSpeed) // 0x1C, flags 0x2 SPROP_COORD
    NETVAR_FIELD(Vector, m_vecDirection) // 0x20
};

} // namespace NetvarServer
