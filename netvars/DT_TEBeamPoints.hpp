// DT_TEBeamPoints - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseBeam
// Client classes: CTEBeamPoints
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_TEBeamPoints : Base
{
    NETVAR_FRAGMENT(DT_TEBeamPoints)

    NETVAR_FIELD(Vector, m_vecStartPoint) // 0x4C
    NETVAR_FIELD(Vector, m_vecEndPoint) // 0x58
};

} // namespace Netvar
