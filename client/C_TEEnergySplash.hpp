// C_TEEnergySplash, the table DT_TEEnergySplash - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Client classes: CTEEnergySplash
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_TEEnergySplash : Base
{
    NETVAR_FRAGMENT(DT_TEEnergySplash)

    NETVAR_FIELD(Vector, m_vecPos) // 0x10
    NETVAR_FIELD(Vector, m_vecDir) // 0x1C
    NETVAR_FIELD(int8_t, m_bExplosive) // 0x28
};

} // namespace Netvar
