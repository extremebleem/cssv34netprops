// CTESmoke, the table DT_TESmoke - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseTempEntity
// Server classes: CTESmoke
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CTESmoke : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_TESmoke)

    NETVAR_FIELD(Vector, m_vecOrigin) // 0xC, flags 0x2 SPROP_COORD
    NETVAR_FIELD(int32_t, m_nModelIndex) // 0x18
    NETVAR_FIELD(float, m_fScale) // 0x1C, flags 0x8 SPROP_ROUNDDOWN
    NETVAR_FIELD(int32_t, m_nFrameRate) // 0x20, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
