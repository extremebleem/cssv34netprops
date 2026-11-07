// CTEKillPlayerAttachments, the table DT_TEKillPlayerAttachments - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseTempEntity
// Server classes: CTEKillPlayerAttachments
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CTEKillPlayerAttachments : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_TEKillPlayerAttachments)

    NETVAR_FIELD(int32_t, m_nPlayer) // 0xC, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
