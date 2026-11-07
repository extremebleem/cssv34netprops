// CTEEffectDispatch, the table DT_TEEffectDispatch - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseTempEntity
// Server classes: CTEEffectDispatch
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CTEEffectDispatch : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_TEEffectDispatch)

    NETVAR_TABLE_NS(NetvarServer, DT_EffectData, m_EffectData) // 0xC, flags 0x200 SPROP_PROXY_ALWAYS_YES
};

} // namespace NetvarServer
