// CTEPlayerDecal, the table DT_TEPlayerDecal - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseTempEntity
// Server classes: CTEPlayerDecal
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CTEPlayerDecal : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_TEPlayerDecal)

    NETVAR_FIELD(int32_t, m_nPlayer) // 0xC, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(Vector, m_vecOrigin) // 0x10, flags 0x2 SPROP_COORD
    NETVAR_FIELD(int32_t, m_nEntity) // 0x1C, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
