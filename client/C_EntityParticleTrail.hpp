// C_EntityParticleTrail, the table DT_EntityParticleTrail - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseParticleEntity
// Client classes: CEntityParticleTrail
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_EntityParticleTrail : Base
{
    NETVAR_FRAGMENT(DT_EntityParticleTrail)

    NETVAR_FIELD(int32_t, m_iMaterialName) // 0x548
    NETVAR_TABLE(DT_EntityParticleTrailInfo, m_Info) // 0x54C
    NETVAR_FIELD(CBaseHandle, m_hConstraintEntity) // 0x560
};

} // namespace Netvar
