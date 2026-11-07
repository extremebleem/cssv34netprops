// CSmokeStack, the table DT_SmokeStack - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseParticleEntity
// Server classes: CSmokeStack
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CSmokeStack : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_SmokeStack)

    NETVAR_FIELD(float, m_SpreadSpeed) // 0x350, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_Speed) // 0x354, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_StartSize) // 0x358, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_EndSize) // 0x35C, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_Rate) // 0x360, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_JetLength) // 0x364, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flRollSpeed) // 0x368, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(int32_t, m_bEmit) // 0x36C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_flBaseSpread) // 0x370, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD_AS(Vector, m_AmbientLight_m_vPos, "m_AmbientLight.m_vPos") // 0x37C, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD_AS(Vector, m_AmbientLight_m_vColor, "m_AmbientLight.m_vColor") // 0x388, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD_AS(float, m_AmbientLight_m_flIntensity, "m_AmbientLight.m_flIntensity") // 0x394, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD_AS(Vector, m_DirLight_m_vPos, "m_DirLight.m_vPos") // 0x3A0, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD_AS(Vector, m_DirLight_m_vColor, "m_DirLight.m_vColor") // 0x3AC, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD_AS(float, m_DirLight_m_flIntensity, "m_DirLight.m_flIntensity") // 0x3B8, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flTwist) // 0x3BC, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(Vector, m_vWind) // 0x3D0, flags 0x4 SPROP_NOSCALE
    // not generated: m_iMaterialModel, 0x3C4: the receive tables of the game list it: custom proxy 0x24139F00, the width of the variable is not known
};

} // namespace NetvarServer
