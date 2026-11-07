// C_TEBeamFollow, the table DT_TEBeamFollow - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_TEBaseBeam
// Client classes: CTEBeamFollow
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_TEBeamFollow : Base
{
    NETVAR_FRAGMENT(DT_TEBeamFollow)

    NETVAR_FIELD(int32_t, m_iEntIndex) // 0x4C
};

} // namespace Netvar
