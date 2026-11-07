// CCSTeam, the table DT_CSTeam - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CTeam
// Server classes: CCSTeam
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CCSTeam : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_CSTeam)
};

} // namespace NetvarServer
