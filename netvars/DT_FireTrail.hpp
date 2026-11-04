// DT_FireTrail - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseParticleEntity
// Client classes: CFireTrail
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_FireTrail : Base
{
    NETVAR_FRAGMENT(DT_FireTrail)

    NETVAR_FIELD(int32_t, m_nAttachment) // 0x54C
    NETVAR_FIELD(float, m_flLifetime) // 0x550
};

} // namespace Netvar
