// CEnvWind, the table DT_EnvWind - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Server classes: CEnvWind
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CEnvWind : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_EnvWind)

    NETVAR_TABLE_NS(NetvarServer, DT_EnvWindShared, m_EnvWindShared) // 0x350, flags 0x200 SPROP_PROXY_ALWAYS_YES
};

} // namespace NetvarServer
