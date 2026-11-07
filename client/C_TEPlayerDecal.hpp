// C_TEPlayerDecal, the table DT_TEPlayerDecal - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseTempEntity
// Client classes: CTEPlayerDecal
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_TEPlayerDecal : Base
{
    NETVAR_FRAGMENT(DT_TEPlayerDecal)

    NETVAR_FIELD(int32_t, m_nPlayer) // 0x10
    NETVAR_FIELD(Vector, m_vecOrigin) // 0x14
    NETVAR_FIELD(int32_t, m_nEntity) // 0x20
};

} // namespace Netvar
