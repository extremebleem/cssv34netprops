// DT_Team - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Client classes: CTeam
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_Team : Base
{
    NETVAR_FRAGMENT(DT_Team)

    NETVAR_FIELD_STRING(m_szTeamname, 32) // 0x474, char[32]
    NETVAR_FIELD(int32_t, m_iScore) // 0x494
    NETVAR_FIELD(int32_t, m_iTeamNum) // 0x4A4
    // not generated: "player_array", 0x0: array of custom proxy 0x2407FE40, the width of the variable is not known
};

} // namespace Netvar
