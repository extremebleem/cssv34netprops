// ParticleSmokeGrenade, the table DT_ParticleSmokeGrenade - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseParticleEntity
// Server classes: ParticleSmokeGrenade
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct ParticleSmokeGrenade : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_ParticleSmokeGrenade)

    NETVAR_FIELD(float, m_flSpawnTime) // 0x354, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_FadeStartTime) // 0x358, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_FadeEndTime) // 0x35C, flags 0x4 SPROP_NOSCALE
    // not generated: m_CurrentStage, 0x350: the receive tables of the game list it: custom proxy 0x2418D8B0, the width of the variable is not known
};

} // namespace NetvarServer
