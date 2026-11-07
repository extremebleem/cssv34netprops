// CTest_ProxyToggle_Networkable, the table DT_ProxyToggle - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseEntity
// Server classes: CTest_ProxyToggle_Networkable
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CTest_ProxyToggle_Networkable : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_ProxyToggle)

    NETVAR_TABLE_NS(NetvarServer, DT_ProxyToggle_ProxiedData, blah) // 0x0
};

} // namespace NetvarServer
