// C_TEGaussExplosion, the table DT_TEGaussExplosion - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_TEParticleSystem
// Client classes: CTEGaussExplosion
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_TEGaussExplosion : Base
{
    NETVAR_FRAGMENT(DT_TEGaussExplosion)

    NETVAR_FIELD(int32_t, m_nType) // 0x1C
    NETVAR_FIELD(Vector, m_vecDirection) // 0x20
};

} // namespace Netvar
