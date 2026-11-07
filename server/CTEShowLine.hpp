// CTEShowLine, the table DT_TEShowLine - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CTEParticleSystem
// Server classes: CTEShowLine
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CTEShowLine : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_TEShowLine)

    NETVAR_FIELD(Vector, m_vecEnd) // 0x18, flags 0x2 SPROP_COORD
};

} // namespace NetvarServer
