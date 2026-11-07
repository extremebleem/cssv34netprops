// CTEBeamRingPoint, the table DT_TEBeamRingPoint - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CTEBaseBeam
// Server classes: CTEBeamRingPoint
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CTEBeamRingPoint : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_TEBeamRingPoint)

    NETVAR_FIELD(Vector, m_vecCenter) // 0x48, flags 0x2 SPROP_COORD
    NETVAR_FIELD(float, m_flStartRadius) // 0x54, flags 0x10 SPROP_ROUNDUP
    NETVAR_FIELD(float, m_flEndRadius) // 0x58, flags 0x10 SPROP_ROUNDUP
};

} // namespace NetvarServer
