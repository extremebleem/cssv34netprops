// CTesla, the table DT_Tesla - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseEntity
// Server classes: CTesla
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CTesla : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_Tesla)

    NETVAR_FIELD_STRING(m_SoundName, 64) // 0x354, char[64]
    NETVAR_FIELD_STRING(m_iszSpriteName, 256) // 0x384, char[256]
};

} // namespace NetvarServer
