// DT_EntityParticleTrailInfo - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct DT_EntityParticleTrailInfo : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_EntityParticleTrailInfo)

    NETVAR_FIELD(float, m_flLifetime) // 0x8, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flStartSize) // 0xC, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flEndSize) // 0x10, flags 0x4 SPROP_NOSCALE
};

} // namespace NetvarServer
