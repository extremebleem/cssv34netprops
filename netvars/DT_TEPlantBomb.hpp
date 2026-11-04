// DT_TEPlantBomb - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Client classes: CTEPlantBomb
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_TEPlantBomb : Base
{
    NETVAR_FRAGMENT(DT_TEPlantBomb)

    NETVAR_FIELD(int32_t, m_iPlayer) // 0x10
    NETVAR_FIELD(Vector, m_vecOrigin) // 0x14
};

} // namespace Netvar
