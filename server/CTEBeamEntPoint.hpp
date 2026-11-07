// CTEBeamEntPoint, the table DT_TEBeamEntPoint - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CTEBaseBeam
// Server classes: CTEBeamEntPoint
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CTEBeamEntPoint : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_TEBeamEntPoint)

    NETVAR_FIELD(int32_t, m_nStartEntity) // 0x48, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(Vector, m_vecStartPoint) // 0x4C, flags 0x2 SPROP_COORD
    NETVAR_FIELD(int32_t, m_nEndEntity) // 0x58, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(Vector, m_vecEndPoint) // 0x5C, flags 0x2 SPROP_COORD
};

} // namespace NetvarServer
