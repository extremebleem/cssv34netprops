// CTEFootprintDecal, the table DT_TEFootprintDecal - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseTempEntity
// Server classes: CTEFootprintDecal
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CTEFootprintDecal : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_TEFootprintDecal)

    NETVAR_FIELD(Vector, m_vecOrigin) // 0xC, flags 0x2 SPROP_COORD
    NETVAR_FIELD(Vector, m_vecDirection) // 0x18, flags 0x2 SPROP_COORD
    NETVAR_FIELD(int32_t, m_nEntity) // 0x24, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nIndex) // 0x28, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_chMaterialType) // 0x2C, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
