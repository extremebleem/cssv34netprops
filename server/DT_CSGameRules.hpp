// DT_CSGameRules - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct DT_CSGameRules : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_CSGameRules)

    NETVAR_FIELD(int8_t, m_bFreezePeriod) // 0x214, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_iRoundTime) // 0x218
    NETVAR_FIELD(float, m_fRoundStartTime) // 0x21C, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flGameStartTime) // 0x220, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(int32_t, m_iHostagesRemaining) // 0x224
    NETVAR_FIELD(int8_t, m_bMapHasBombTarget) // 0x228, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_bMapHasRescueZone) // 0x229, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_bLogoMap) // 0x22A, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_bBlackMarket) // 0x22B, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
