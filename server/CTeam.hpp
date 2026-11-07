// CTeam, the table DT_Team - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Server classes: CTeam
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CTeam : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_Team)

    NETVAR_FIELD_STRING(m_szTeamname, 32) // 0x378, char[32]
    NETVAR_FIELD(int32_t, m_iScore) // 0x398
    NETVAR_FIELD(int32_t, m_iTeamNum) // 0x3A4
    // not generated: "player_array", 0x0: a variable-length array (an array length proxy): its elements are not at inline offsets
};

} // namespace NetvarServer
