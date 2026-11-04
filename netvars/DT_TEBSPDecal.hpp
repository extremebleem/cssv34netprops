// DT_TEBSPDecal - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseTempEntity
// Client classes: CTEBSPDecal
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_TEBSPDecal : Base
{
    NETVAR_FRAGMENT(DT_TEBSPDecal)

    NETVAR_FIELD(Vector, m_vecOrigin) // 0x10
    NETVAR_FIELD(int32_t, m_nEntity) // 0x1C
    NETVAR_FIELD(int32_t, m_nIndex) // 0x20
};

} // namespace Netvar
