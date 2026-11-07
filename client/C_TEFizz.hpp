// C_TEFizz, the table DT_TEFizz - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseTempEntity
// Client classes: CTEFizz
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_TEFizz : Base
{
    NETVAR_FRAGMENT(DT_TEFizz)

    NETVAR_FIELD(int32_t, m_nEntity) // 0x10
    NETVAR_FIELD(int32_t, m_nModelIndex) // 0x14
    NETVAR_FIELD(int32_t, m_nDensity) // 0x18
    NETVAR_FIELD(int32_t, m_nCurrent) // 0x1C
};

} // namespace Netvar
