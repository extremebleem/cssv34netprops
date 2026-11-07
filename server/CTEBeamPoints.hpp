// CTEBeamPoints, the table DT_TEBeamPoints - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CTEBaseBeam
// Server classes: CTEBeamPoints
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CTEBeamPoints : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_TEBeamPoints)

    NETVAR_FIELD(Vector, m_vecStartPoint) // 0x48, flags 0x2 SPROP_COORD
    NETVAR_FIELD(Vector, m_vecEndPoint) // 0x54, flags 0x2 SPROP_COORD
};

} // namespace NetvarServer
