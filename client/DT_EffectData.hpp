// DT_EffectData - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_EffectData : Base
{
    NETVAR_FRAGMENT(DT_EffectData)

    NETVAR_FIELD_AS(float, m_vOrigin_0_, "m_vOrigin[0]") // 0x0
    NETVAR_FIELD_AS(float, m_vOrigin_1_, "m_vOrigin[1]") // 0x4
    NETVAR_FIELD_AS(float, m_vOrigin_2_, "m_vOrigin[2]") // 0x8
    NETVAR_FIELD_AS(float, m_vStart_0_, "m_vStart[0]") // 0xC
    NETVAR_FIELD_AS(float, m_vStart_1_, "m_vStart[1]") // 0x10
    NETVAR_FIELD_AS(float, m_vStart_2_, "m_vStart[2]") // 0x14
    NETVAR_FIELD(Vector, m_vNormal) // 0x18
    NETVAR_FIELD(Vector, m_vAngles) // 0x24
    NETVAR_FIELD(int32_t, m_fFlags) // 0x30
    NETVAR_FIELD(float, m_flScale) // 0x38
    NETVAR_FIELD(float, m_flMagnitude) // 0x3C
    NETVAR_FIELD(float, m_flRadius) // 0x40
    NETVAR_FIELD(int32_t, m_nAttachmentIndex) // 0x44
    NETVAR_FIELD(int32_t, m_nMaterial) // 0x4C
    NETVAR_FIELD(int32_t, m_nDamageType) // 0x50
    NETVAR_FIELD(int32_t, m_nHitBox) // 0x54
    NETVAR_FIELD(int8_t, m_nColor) // 0x58
    NETVAR_FIELD(int32_t, m_iEffectName) // 0x5C
    // not generated: m_nSurfaceProp, 0x48: custom proxy 0x24139F20, the width of the variable is not known
    // not generated: entindex, 0x0: custom proxy 0x240B8D10, the width of the variable is not known
};

} // namespace Netvar
