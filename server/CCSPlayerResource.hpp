// CCSPlayerResource, the table DT_CSPlayerResource - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CPlayerResource
// Server classes: CCSPlayerResource
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CCSPlayerResource : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_CSPlayerResource)

    NETVAR_FIELD(int32_t, m_iPlayerC4) // 0xA70, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_iPlayerVIP) // 0xA74, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(Vector, m_vecC4) // 0xA78, flags 0x2 SPROP_COORD
    NETVAR_FIELD_ARRAY(int8_t, m_bHostageAlive, 12) // 0xA84, flags 0x200 SPROP_PROXY_ALWAYS_YES, int8_t[12]
    NETVAR_FIELD_ARRAY(int8_t, m_isHostageFollowingSomeone, 12) // 0xA90, flags 0x200 SPROP_PROXY_ALWAYS_YES, int8_t[12]
    NETVAR_FIELD_ARRAY(int32_t, m_iHostageEntityIDs, 12) // 0xA9C, flags 0x200 SPROP_PROXY_ALWAYS_YES, int32_t[12]
    NETVAR_FIELD_ARRAY(int32_t, m_iHostageX, 12) // 0xACC, flags 0x200 SPROP_PROXY_ALWAYS_YES, int32_t[12]
    NETVAR_FIELD_ARRAY(int32_t, m_iHostageY, 12) // 0xAFC, flags 0x200 SPROP_PROXY_ALWAYS_YES, int32_t[12]
    NETVAR_FIELD_ARRAY(int32_t, m_iHostageZ, 12) // 0xB2C, flags 0x200 SPROP_PROXY_ALWAYS_YES, int32_t[12]
    NETVAR_FIELD(Vector, m_bombsiteCenterA) // 0xB5C, flags 0x2 SPROP_COORD
    NETVAR_FIELD(Vector, m_bombsiteCenterB) // 0xB68, flags 0x2 SPROP_COORD
    NETVAR_FIELD_ARRAY(int32_t, m_hostageRescueX, 4) // 0xB74, flags 0x200 SPROP_PROXY_ALWAYS_YES, int32_t[4]
    NETVAR_FIELD_ARRAY(int32_t, m_hostageRescueY, 4) // 0xB84, flags 0x200 SPROP_PROXY_ALWAYS_YES, int32_t[4]
    NETVAR_FIELD_ARRAY(int32_t, m_hostageRescueZ, 4) // 0xB94, flags 0x200 SPROP_PROXY_ALWAYS_YES, int32_t[4]
    NETVAR_FIELD(int8_t, m_bBombSpotted) // 0xBA4, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD_ARRAY(int8_t, m_bPlayerSpotted, 65) // 0xBA5, flags 0x200 SPROP_PROXY_ALWAYS_YES, int8_t[65]
};

} // namespace NetvarServer
