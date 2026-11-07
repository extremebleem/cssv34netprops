// CTEPlayerAnimEvent, the table DT_TEPlayerAnimEvent - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Server classes: CTEPlayerAnimEvent
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CTEPlayerAnimEvent : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_TEPlayerAnimEvent)

    NETVAR_FIELD(CBaseHandle, m_hPlayer) // 0xC, flags 0x5 SPROP_UNSIGNED|SPROP_NOSCALE
    NETVAR_FIELD(int32_t, m_iEvent) // 0x10, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
