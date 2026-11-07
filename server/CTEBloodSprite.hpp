// CTEBloodSprite, the table DT_TEBloodSprite - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Server classes: CTEBloodSprite
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CTEBloodSprite : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_TEBloodSprite)

    NETVAR_FIELD(Vector, m_vecOrigin) // 0xC, flags 0x2 SPROP_COORD
    NETVAR_FIELD(Vector, m_vecDirection) // 0x18, flags 0x2 SPROP_COORD
    NETVAR_FIELD(int32_t, m_nSprayModel) // 0x24
    NETVAR_FIELD(int32_t, m_nDropModel) // 0x28
    NETVAR_FIELD(int32_t, r) // 0x2C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, g) // 0x30, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, b) // 0x34, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, a) // 0x38, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nSize) // 0x3C, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
