// CEnvParticleScript, the table DT_EnvParticleScript - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseAnimating
// Server classes: CEnvParticleScript
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CEnvParticleScript : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_EnvParticleScript)

    NETVAR_FIELD(float, m_flSequenceScale) // 0x468, flags 0x4 SPROP_NOSCALE
};

} // namespace NetvarServer
