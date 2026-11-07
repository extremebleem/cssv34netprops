// CTEEnergySplash, the table DT_TEEnergySplash - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Server classes: CTEEnergySplash
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CTEEnergySplash : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_TEEnergySplash)

    NETVAR_FIELD(Vector, m_vecPos) // 0xC, flags 0x2 SPROP_COORD
    NETVAR_FIELD(Vector, m_vecDir) // 0x18, flags 0x2 SPROP_COORD
    NETVAR_FIELD(int8_t, m_bExplosive) // 0x24, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
