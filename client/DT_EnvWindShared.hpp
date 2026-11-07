// DT_EnvWindShared - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_EnvWindShared : Base
{
    NETVAR_FRAGMENT(DT_EnvWindShared)

    NETVAR_FIELD(float, m_flStartTime) // 0x4
    NETVAR_FIELD(int32_t, m_iWindSeed) // 0x8
    NETVAR_FIELD(int32_t, m_iMinWind) // 0xC
    NETVAR_FIELD(int32_t, m_iMaxWind) // 0x10
    NETVAR_FIELD(int32_t, m_iMinGust) // 0x14
    NETVAR_FIELD(int32_t, m_iMaxGust) // 0x18
    NETVAR_FIELD(float, m_flMinGustDelay) // 0x1C
    NETVAR_FIELD(float, m_flMaxGustDelay) // 0x20
    NETVAR_FIELD(float, m_flGustDuration) // 0x24
    NETVAR_FIELD(int32_t, m_iGustDirChange) // 0x28
    NETVAR_FIELD(int32_t, m_iInitialWindDir) // 0x38
    NETVAR_FIELD(float, m_flInitialWindSpeed) // 0x3C
};

} // namespace Netvar
