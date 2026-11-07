// CTEBeamSpline, the table DT_TEBeamSpline - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Server classes: CTEBeamSpline
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CTEBeamSpline : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_TEBeamSpline)

    NETVAR_FIELD(int32_t, m_nPoints) // 0xCC, flags 0x1 SPROP_UNSIGNED
    // not generated: m_vecPoints, 0x0: a send prop of an array says the stride of its elements, not the type of one element, and the receive tables of the game have no such field
};

} // namespace NetvarServer
