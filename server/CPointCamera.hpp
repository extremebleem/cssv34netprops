// CPointCamera, the table DT_PointCamera - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseEntity
// Server classes: CPointCamera
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CPointCamera : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_PointCamera)

    NETVAR_FIELD(float, m_FOV) // 0x358, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_Resolution) // 0x35C, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(int8_t, m_bFogEnable) // 0x360, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_FogColor) // 0x361, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_flFogStart) // 0x368, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flFogEnd) // 0x36C, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(int8_t, m_bActive) // 0x370, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_bUseScreenAspectRatio) // 0x371, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
