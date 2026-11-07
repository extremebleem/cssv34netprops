// C_CSPlayerResource, the table DT_CSPlayerResource - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_PlayerResource
// Client classes: CCSPlayerResource
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_CSPlayerResource : Base
{
    NETVAR_FRAGMENT(DT_CSPlayerResource)

    NETVAR_FIELD(int32_t, m_iPlayerC4) // 0x12A0
    NETVAR_FIELD(int32_t, m_iPlayerVIP) // 0x12A4
    NETVAR_FIELD(Vector, m_vecC4) // 0x12A8
    NETVAR_FIELD(Vector, m_bombsiteCenterA) // 0x12B4
    NETVAR_FIELD(Vector, m_bombsiteCenterB) // 0x12C0
    NETVAR_FIELD_ARRAY(int8_t, m_bHostageAlive, 12) // 0x12CC, int8_t[12]
    NETVAR_FIELD_ARRAY(int8_t, m_isHostageFollowingSomeone, 12) // 0x12D8, int8_t[12]
    NETVAR_FIELD_ARRAY(int32_t, m_iHostageEntityIDs, 12) // 0x12E4, int32_t[12]
    NETVAR_FIELD_ARRAY(int32_t, m_iHostageX, 12) // 0x1314, int32_t[12]
    NETVAR_FIELD_ARRAY(int32_t, m_iHostageY, 12) // 0x1344, int32_t[12]
    NETVAR_FIELD_ARRAY(int32_t, m_iHostageZ, 12) // 0x1374, int32_t[12]
    NETVAR_FIELD_ARRAY(int32_t, m_hostageRescueX, 4) // 0x13A4, int32_t[4]
    NETVAR_FIELD_ARRAY(int32_t, m_hostageRescueY, 4) // 0x13B4, int32_t[4]
    NETVAR_FIELD_ARRAY(int32_t, m_hostageRescueZ, 4) // 0x13C4, int32_t[4]
    NETVAR_FIELD(int8_t, m_bBombSpotted) // 0x13D4
    NETVAR_FIELD_ARRAY(int8_t, m_bPlayerSpotted, 65) // 0x13D5, int8_t[65]
};

} // namespace Netvar
