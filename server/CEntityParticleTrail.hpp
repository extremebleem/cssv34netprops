// CEntityParticleTrail, the table DT_EntityParticleTrail - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseParticleEntity
// Server classes: CEntityParticleTrail
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CEntityParticleTrail : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_EntityParticleTrail)

    NETVAR_FIELD(int32_t, m_iMaterialName) // 0x350, flags 0x1 SPROP_UNSIGNED
    NETVAR_TABLE_NS(NetvarServer, DT_EntityParticleTrailInfo, m_Info) // 0x354, flags 0x200 SPROP_PROXY_ALWAYS_YES
    NETVAR_FIELD(CBaseHandle, m_hConstraintEntity) // 0x368, flags 0x5 SPROP_UNSIGNED|SPROP_NOSCALE
};

} // namespace NetvarServer
