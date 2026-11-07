// C_ParticleFire, the table DT_ParticleFire - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Client classes: CParticleFire
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_ParticleFire : Base
{
    NETVAR_FRAGMENT(DT_ParticleFire)

    NETVAR_FIELD(Vector, m_vOrigin) // 0x554
    NETVAR_FIELD(Vector, m_vDirection) // 0x560
};

} // namespace Netvar
