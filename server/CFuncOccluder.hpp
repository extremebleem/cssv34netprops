// CFuncOccluder, the table DT_FuncOccluder - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Server classes: CFuncOccluder
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CFuncOccluder : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_FuncOccluder)

    NETVAR_FIELD(int8_t, m_bActive) // 0x350, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nOccluderIndex) // 0x354, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
