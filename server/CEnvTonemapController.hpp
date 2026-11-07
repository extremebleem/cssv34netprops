// CEnvTonemapController, the table DT_EnvTonemapController - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseEntity
// Server classes: CEnvTonemapController
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CEnvTonemapController : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_EnvTonemapController)

    NETVAR_FIELD(int8_t, m_bUseCustomAutoExposureMin) // 0x360, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_bUseCustomAutoExposureMax) // 0x361, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_bUseCustomBloomScale) // 0x362, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_flCustomAutoExposureMin) // 0x364, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flCustomAutoExposureMax) // 0x368, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flCustomBloomScale) // 0x36C, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flCustomBloomScaleMinimum) // 0x370, flags 0x4 SPROP_NOSCALE
};

} // namespace NetvarServer
