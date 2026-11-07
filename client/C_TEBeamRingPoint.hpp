// C_TEBeamRingPoint, the table DT_TEBeamRingPoint - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_TEBaseBeam
// Client classes: CTEBeamRingPoint
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_TEBeamRingPoint : Base
{
    NETVAR_FRAGMENT(DT_TEBeamRingPoint)

    NETVAR_FIELD(Vector, m_vecCenter) // 0x4C
    NETVAR_FIELD(float, m_flStartRadius) // 0x58
    NETVAR_FIELD(float, m_flEndRadius) // 0x5C
};

} // namespace Netvar
