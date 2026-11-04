// DT_TEBeamSpline - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Client classes: CTEBeamSpline
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_TEBeamSpline : Base
{
    NETVAR_FRAGMENT(DT_TEBeamSpline)

    NETVAR_FIELD(int32_t, m_nPoints) // 0xD0
    // not generated: m_vecPoints, 0x0: offset 0 of an entity is its vtable: a value that only its proxy stores
};

} // namespace Netvar
