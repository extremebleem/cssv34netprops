// CTEFireBullets, the table DT_TEFireBullets - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Server classes: CTEFireBullets
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CTEFireBullets : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_TEFireBullets)

    NETVAR_FIELD(int32_t, m_iPlayer) // 0xC, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(Vector, m_vecOrigin) // 0x10, flags 0x2 SPROP_COORD
    NETVAR_FIELD_AS(float, m_vecAngles_0_, "m_vecAngles[0]") // 0x1C, flags 0x800 SPROP_IS_A_VECTOR_ELEM
    NETVAR_FIELD_AS(float, m_vecAngles_1_, "m_vecAngles[1]") // 0x20, flags 0x800 SPROP_IS_A_VECTOR_ELEM
    NETVAR_FIELD(int32_t, m_iWeaponID) // 0x28, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_iMode) // 0x2C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_iSeed) // 0x30, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_flSpread) // 0x34
};

} // namespace NetvarServer
