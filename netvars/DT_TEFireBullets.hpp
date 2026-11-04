// DT_TEFireBullets - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Client classes: CTEFireBullets
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_TEFireBullets : Base
{
    NETVAR_FRAGMENT(DT_TEFireBullets)

    NETVAR_FIELD(int32_t, m_iPlayer) // 0x10
    NETVAR_FIELD(Vector, m_vecOrigin) // 0x14
    NETVAR_FIELD_AS(float, m_vecAngles_0_, "m_vecAngles[0]") // 0x20
    NETVAR_FIELD_AS(float, m_vecAngles_1_, "m_vecAngles[1]") // 0x24
    NETVAR_FIELD(int32_t, m_iWeaponID) // 0x2C
    NETVAR_FIELD(int32_t, m_iMode) // 0x30
    NETVAR_FIELD(int32_t, m_iSeed) // 0x34
    NETVAR_FIELD(float, m_flSpread) // 0x38
};

} // namespace Netvar
