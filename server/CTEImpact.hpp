// CTEImpact, the table DT_TEImpact - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseTempEntity
// Server classes: CTEImpact
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CTEImpact : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_TEImpact)

    NETVAR_FIELD(Vector, m_vecOrigin) // 0xC, flags 0x2 SPROP_COORD
    NETVAR_FIELD(Vector, m_vecNormal) // 0x18, flags 0x2 SPROP_COORD
    NETVAR_FIELD(int32_t, m_iType) // 0x24, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
