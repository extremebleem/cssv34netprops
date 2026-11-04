// DT_EntityParticleTrailInfo - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_EntityParticleTrailInfo : Base
{
    NETVAR_FRAGMENT(DT_EntityParticleTrailInfo)

    NETVAR_FIELD(float, m_flLifetime) // 0x8
    NETVAR_FIELD(float, m_flStartSize) // 0xC
    NETVAR_FIELD(float, m_flEndSize) // 0x10
};

} // namespace Netvar
