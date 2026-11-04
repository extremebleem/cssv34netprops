// DT_SmokeTrail - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseParticleEntity
// Client classes: SmokeTrail
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_SmokeTrail : Base
{
    NETVAR_FRAGMENT(DT_SmokeTrail)

    NETVAR_FIELD(float, m_SpawnRate) // 0x54C
    NETVAR_FIELD(Vector, m_StartColor) // 0x550
    NETVAR_FIELD(Vector, m_EndColor) // 0x55C
    NETVAR_FIELD(float, m_Opacity) // 0x568
    NETVAR_FIELD(float, m_ParticleLifetime) // 0x56C
    NETVAR_FIELD(float, m_StopEmitTime) // 0x570
    NETVAR_FIELD(float, m_MinSpeed) // 0x574
    NETVAR_FIELD(float, m_MaxSpeed) // 0x578
    NETVAR_FIELD(float, m_MinDirectedSpeed) // 0x57C
    NETVAR_FIELD(float, m_MaxDirectedSpeed) // 0x580
    NETVAR_FIELD(float, m_StartSize) // 0x584
    NETVAR_FIELD(float, m_EndSize) // 0x588
    NETVAR_FIELD(float, m_SpawnRadius) // 0x58C
    NETVAR_FIELD(int8_t, m_bEmit) // 0x59C
    NETVAR_FIELD(int32_t, m_nAttachment) // 0x5A0
};

} // namespace Netvar
