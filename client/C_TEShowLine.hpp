// C_TEShowLine, the table DT_TEShowLine - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_TEParticleSystem
// Client classes: CTEShowLine
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_TEShowLine : Base
{
    NETVAR_FRAGMENT(DT_TEShowLine)

    NETVAR_FIELD(Vector, m_vecEnd) // 0x1C
};

} // namespace Netvar
