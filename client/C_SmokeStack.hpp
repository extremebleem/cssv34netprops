// C_SmokeStack, the table DT_SmokeStack - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseParticleEntity
// Client classes: CSmokeStack
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_SmokeStack : Base
{
    NETVAR_FRAGMENT(DT_SmokeStack)

    NETVAR_FIELD(float, m_SpreadSpeed) // 0x59C
    NETVAR_FIELD(float, m_Speed) // 0x5A0
    NETVAR_FIELD(float, m_StartSize) // 0x5A4
    NETVAR_FIELD(float, m_EndSize) // 0x5A8
    NETVAR_FIELD(float, m_Rate) // 0x5AC
    NETVAR_FIELD(float, m_JetLength) // 0x5B0
    NETVAR_FIELD(int32_t, m_bEmit) // 0x5B4
    NETVAR_FIELD(float, m_flBaseSpread) // 0x5B8
    NETVAR_FIELD_AS(Vector, m_AmbientLight_m_vPos, "m_AmbientLight.m_vPos") // 0x5BC
    NETVAR_FIELD_AS(Vector, m_AmbientLight_m_vColor, "m_AmbientLight.m_vColor") // 0x5C8
    NETVAR_FIELD_AS(float, m_AmbientLight_m_flIntensity, "m_AmbientLight.m_flIntensity") // 0x5D4
    NETVAR_FIELD_AS(Vector, m_DirLight_m_vPos, "m_DirLight.m_vPos") // 0x5D8
    NETVAR_FIELD_AS(Vector, m_DirLight_m_vColor, "m_DirLight.m_vColor") // 0x5E4
    NETVAR_FIELD_AS(float, m_DirLight_m_flIntensity, "m_DirLight.m_flIntensity") // 0x5F0
    NETVAR_FIELD(Vector, m_vWind) // 0x600
    NETVAR_FIELD(float, m_flTwist) // 0x60C
    NETVAR_FIELD(float, m_flRollSpeed) // 0x648
    // not generated: m_iMaterialModel, 0x610: custom proxy 0x24139F00, the width of the variable is not known
};

} // namespace Netvar
