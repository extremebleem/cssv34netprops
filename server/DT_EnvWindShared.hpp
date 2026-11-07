// DT_EnvWindShared - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct DT_EnvWindShared : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_EnvWindShared)

    NETVAR_FIELD(float, m_flStartTime) // 0x4, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(int32_t, m_iWindSeed) // 0x8, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_iMinWind) // 0xC, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_iMaxWind) // 0x10, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_iMinGust) // 0x14, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_iMaxGust) // 0x18, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_flMinGustDelay) // 0x1C, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flMaxGustDelay) // 0x20, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flGustDuration) // 0x24, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(int32_t, m_iGustDirChange) // 0x28, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_iInitialWindDir) // 0x38, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_flInitialWindSpeed) // 0x3C, flags 0x4 SPROP_NOSCALE
};

} // namespace NetvarServer
