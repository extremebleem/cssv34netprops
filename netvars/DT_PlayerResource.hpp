// DT_PlayerResource - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Client classes: CPlayerResource
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_PlayerResource : Base
{
    NETVAR_FRAGMENT(DT_PlayerResource)

    NETVAR_FIELD_ARRAY(int32_t, m_iPing, 65) // 0xC84, int32_t[65]
    NETVAR_FIELD_ARRAY(int32_t, m_iScore, 65) // 0xD88, int32_t[65]
    NETVAR_FIELD_ARRAY(int32_t, m_iDeaths, 65) // 0xE8C, int32_t[65]
    NETVAR_FIELD_ARRAY(int8_t, m_bConnected, 65) // 0xF90, int8_t[65]
    NETVAR_FIELD_ARRAY(int32_t, m_iTeam, 65) // 0xFD4, int32_t[65]
    NETVAR_FIELD_ARRAY(int8_t, m_bAlive, 65) // 0x10D8, int8_t[65]
    NETVAR_FIELD_ARRAY(int32_t, m_iHealth, 65) // 0x111C, int32_t[65]
};

} // namespace Netvar
