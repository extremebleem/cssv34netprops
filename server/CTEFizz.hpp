// CTEFizz, the table DT_TEFizz - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseTempEntity
// Server classes: CTEFizz
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CTEFizz : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_TEFizz)

    NETVAR_FIELD(int32_t, m_nEntity) // 0xC, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nModelIndex) // 0x10
    NETVAR_FIELD(int32_t, m_nDensity) // 0x14, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nCurrent) // 0x18
};

} // namespace NetvarServer
