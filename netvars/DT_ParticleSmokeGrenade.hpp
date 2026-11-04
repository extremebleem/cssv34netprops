// DT_ParticleSmokeGrenade - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseParticleEntity
// Client classes: ParticleSmokeGrenade
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_ParticleSmokeGrenade : Base
{
    NETVAR_FRAGMENT(DT_ParticleSmokeGrenade)

    NETVAR_FIELD(float, m_flSpawnTime) // 0x55C
    NETVAR_FIELD(float, m_FadeStartTime) // 0x560
    NETVAR_FIELD(float, m_FadeEndTime) // 0x564
    // not generated: m_CurrentStage, 0x54C: custom proxy 0x2418D8B0, the width of the variable is not known
};

} // namespace Netvar
