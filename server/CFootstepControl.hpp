// CFootstepControl, the table DT_FootstepControl - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseEntity
// Server classes: CFootstepControl
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CFootstepControl : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_FootstepControl)

    NETVAR_FIELD_STRING(m_source, 16) // 0x42C, char[16]
    NETVAR_FIELD_STRING(m_destination, 16) // 0x430, char[16]
};

} // namespace NetvarServer
