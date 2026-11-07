// CEmbers, the table DT_Embers - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseEntity
// Server classes: CEmbers
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CEmbers : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_Embers)

    NETVAR_FIELD(int32_t, m_nDensity) // 0x350, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nLifetime) // 0x354, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nSpeed) // 0x358, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_bEmit) // 0x35C, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
