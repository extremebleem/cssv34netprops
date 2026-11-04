// DT_TEBubbleTrail - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseTempEntity
// Client classes: CTEBubbleTrail
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_TEBubbleTrail : Base
{
    NETVAR_FRAGMENT(DT_TEBubbleTrail)

    NETVAR_FIELD(Vector, m_vecMins) // 0x10
    NETVAR_FIELD(Vector, m_vecMaxs) // 0x1C
    NETVAR_FIELD(float, m_flWaterZ) // 0x28
    NETVAR_FIELD(int32_t, m_nModelIndex) // 0x2C
    NETVAR_FIELD(int32_t, m_nCount) // 0x30
    NETVAR_FIELD(float, m_fSpeed) // 0x34
};

} // namespace Netvar
