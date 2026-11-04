// DT_TEDust - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_TEParticleSystem
// Client classes: CTEDust
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_TEDust : Base
{
    NETVAR_FRAGMENT(DT_TEDust)

    NETVAR_FIELD(float, m_flSize) // 0x1C
    NETVAR_FIELD(float, m_flSpeed) // 0x20
    NETVAR_FIELD(Vector, m_vecDirection) // 0x24
};

} // namespace Netvar
