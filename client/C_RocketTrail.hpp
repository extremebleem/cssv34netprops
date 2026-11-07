// C_RocketTrail, the table DT_RocketTrail - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseParticleEntity
// Client classes: RocketTrail
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_RocketTrail : Base
{
    NETVAR_FRAGMENT(DT_RocketTrail)

    NETVAR_FIELD(float, m_SpawnRate) // 0x54C
    NETVAR_FIELD(Vector, m_StartColor) // 0x550
    NETVAR_FIELD(Vector, m_EndColor) // 0x55C
    NETVAR_FIELD(float, m_Opacity) // 0x568
    NETVAR_FIELD(float, m_ParticleLifetime) // 0x56C
    NETVAR_FIELD(float, m_StopEmitTime) // 0x570
    NETVAR_FIELD(float, m_MinSpeed) // 0x574
    NETVAR_FIELD(float, m_MaxSpeed) // 0x578
    NETVAR_FIELD(float, m_StartSize) // 0x57C
    NETVAR_FIELD(float, m_EndSize) // 0x580
    NETVAR_FIELD(float, m_SpawnRadius) // 0x584
    NETVAR_FIELD(int8_t, m_bEmit) // 0x594
    NETVAR_FIELD(int8_t, m_bDamaged) // 0x595
    NETVAR_FIELD(int32_t, m_nAttachment) // 0x598
    NETVAR_FIELD(float, m_flFlareScale) // 0x5A8
};

} // namespace Netvar
