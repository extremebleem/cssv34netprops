// CEnvProjectedTexture, the table DT_EnvProjectedTexture - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseEntity
// Server classes: CEnvProjectedTexture
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CEnvProjectedTexture : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_EnvProjectedTexture)

    NETVAR_FIELD(CBaseHandle, m_hTargetEntity) // 0x350, flags 0x5 SPROP_UNSIGNED|SPROP_NOSCALE
    NETVAR_FIELD(int8_t, m_bState) // 0x354, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_flLightFOV) // 0x358, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(int8_t, m_bEnableShadows) // 0x35C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_bLightOnlyTarget) // 0x35D, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_bLightWorld) // 0x35E, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_bCameraSpace) // 0x35F, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_cLightColor) // 0x360, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
