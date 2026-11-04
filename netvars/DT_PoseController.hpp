// DT_PoseController - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseEntity
// Client classes: CPoseController
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_PoseController : Base
{
    NETVAR_FRAGMENT(DT_PoseController)

    NETVAR_FIELD_ARRAY(CBaseHandle, m_hProps, 4) // 0x460, CBaseHandle[4]
    NETVAR_FIELD_ARRAY(int8_t, m_chPoseIndex, 4) // 0x470, int8_t[4]
    NETVAR_FIELD(int8_t, m_bPoseValueParity) // 0x474
    NETVAR_FIELD(float, m_fPoseValue) // 0x478
    NETVAR_FIELD(float, m_fCycleFrequency) // 0x47C
    NETVAR_FIELD(int32_t, m_nFModType) // 0x480
    NETVAR_FIELD(float, m_fFModTimeOffset) // 0x484
    NETVAR_FIELD(float, m_fFModRate) // 0x488
    NETVAR_FIELD(float, m_fFModAmplitude) // 0x48C
};

} // namespace Netvar
