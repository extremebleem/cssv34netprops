// DT_EffectData - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct DT_EffectData : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_EffectData)

    NETVAR_FIELD_AS(float, m_vOrigin_0_, "m_vOrigin[0]") // 0x0
    NETVAR_FIELD_AS(float, m_vOrigin_1_, "m_vOrigin[1]") // 0x4
    NETVAR_FIELD_AS(float, m_vOrigin_2_, "m_vOrigin[2]") // 0x8
    NETVAR_FIELD_AS(float, m_vStart_0_, "m_vStart[0]") // 0xC
    NETVAR_FIELD_AS(float, m_vStart_1_, "m_vStart[1]") // 0x10
    NETVAR_FIELD_AS(float, m_vStart_2_, "m_vStart[2]") // 0x14
    NETVAR_FIELD(Vector, m_vNormal) // 0x18, flags 0x20 SPROP_NORMAL
    NETVAR_FIELD(Vector, m_vAngles) // 0x24
    NETVAR_FIELD(int32_t, m_fFlags) // 0x30, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_flScale) // 0x38, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flMagnitude) // 0x3C, flags 0x8 SPROP_ROUNDDOWN
    NETVAR_FIELD(float, m_flRadius) // 0x40, flags 0x8 SPROP_ROUNDDOWN
    NETVAR_FIELD(int32_t, m_nAttachmentIndex) // 0x44, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nMaterial) // 0x4C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nDamageType) // 0x50, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nHitBox) // 0x54, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_nColor) // 0x58, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_iEffectName) // 0x5C, flags 0x1 SPROP_UNSIGNED
    // not generated: m_nSurfaceProp, 0x48: the receive tables of the game list it: custom proxy 0x24139F20, the width of the variable is not known
    // not generated: entindex, 0x34: the receive tables of the game list it: custom proxy 0x240B8D10, the width of the variable is not known
};

} // namespace NetvarServer
