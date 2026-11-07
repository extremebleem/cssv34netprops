// CHandleTest, the table DT_HandleTest - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseEntity
// Server classes: CHandleTest
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CHandleTest : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_HandleTest)

    NETVAR_FIELD(CBaseHandle, m_Handle) // 0x350, flags 0x5 SPROP_UNSIGNED|SPROP_NOSCALE
    NETVAR_FIELD(int8_t, m_bSendHandle) // 0x354
};

} // namespace NetvarServer
