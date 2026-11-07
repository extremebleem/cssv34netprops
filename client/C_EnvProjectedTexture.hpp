// C_EnvProjectedTexture, the table DT_EnvProjectedTexture - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseEntity
// Client classes: CEnvProjectedTexture
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_EnvProjectedTexture : Base
{
    NETVAR_FRAGMENT(DT_EnvProjectedTexture)

    NETVAR_FIELD(CBaseHandle, m_hTargetEntity) // 0x464
    NETVAR_FIELD(int8_t, m_bState) // 0x468
    NETVAR_FIELD(float, m_flLightFOV) // 0x46C
    NETVAR_FIELD(int8_t, m_bEnableShadows) // 0x470
    NETVAR_FIELD(int8_t, m_bLightOnlyTarget) // 0x471
    NETVAR_FIELD(int8_t, m_bLightWorld) // 0x472
    NETVAR_FIELD(int8_t, m_bCameraSpace) // 0x473
    NETVAR_FIELD(int32_t, m_cLightColor) // 0x474
};

} // namespace Netvar
