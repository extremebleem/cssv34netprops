// DT_CSGameRules - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_CSGameRules : Base
{
    NETVAR_FRAGMENT(DT_CSGameRules)

    NETVAR_FIELD(int8_t, m_bFreezePeriod) // 0xC
    NETVAR_FIELD(int32_t, m_iRoundTime) // 0x10
    NETVAR_FIELD(float, m_fRoundStartTime) // 0x14
    NETVAR_FIELD(float, m_flGameStartTime) // 0x18
    NETVAR_FIELD(int32_t, m_iHostagesRemaining) // 0x1C
    NETVAR_FIELD(int8_t, m_bMapHasBombTarget) // 0x20
    NETVAR_FIELD(int8_t, m_bMapHasRescueZone) // 0x21
    NETVAR_FIELD(int8_t, m_bLogoMap) // 0x22
    NETVAR_FIELD(int8_t, m_bBlackMarket) // 0x23
};

} // namespace Netvar
