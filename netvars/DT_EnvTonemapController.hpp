// DT_EnvTonemapController - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseEntity
// Client classes: CEnvTonemapController
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_EnvTonemapController : Base
{
    NETVAR_FRAGMENT(DT_EnvTonemapController)

    NETVAR_FIELD(int8_t, m_bUseCustomAutoExposureMin) // 0x460
    NETVAR_FIELD(int8_t, m_bUseCustomAutoExposureMax) // 0x461
    NETVAR_FIELD(int8_t, m_bUseCustomBloomScale) // 0x462
    NETVAR_FIELD(float, m_flCustomAutoExposureMin) // 0x464
    NETVAR_FIELD(float, m_flCustomAutoExposureMax) // 0x468
    NETVAR_FIELD(float, m_flCustomBloomScale) // 0x46C
    NETVAR_FIELD(float, m_flCustomBloomScaleMinimum) // 0x470
};

} // namespace Netvar
