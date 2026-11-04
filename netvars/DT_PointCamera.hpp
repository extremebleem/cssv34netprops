// DT_PointCamera - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseEntity
// Client classes: CPointCamera
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_PointCamera : Base
{
    NETVAR_FRAGMENT(DT_PointCamera)

    NETVAR_FIELD(float, m_FOV) // 0x460
    NETVAR_FIELD(float, m_Resolution) // 0x464
    NETVAR_FIELD(int8_t, m_bFogEnable) // 0x468
    NETVAR_FIELD(int32_t, m_FogColor) // 0x469
    NETVAR_FIELD(float, m_flFogStart) // 0x470
    NETVAR_FIELD(float, m_flFogEnd) // 0x474
    NETVAR_FIELD(int8_t, m_bActive) // 0x478
    NETVAR_FIELD(int8_t, m_bUseScreenAspectRatio) // 0x479
};

} // namespace Netvar
