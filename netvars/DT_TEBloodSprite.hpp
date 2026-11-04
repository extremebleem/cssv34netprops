// DT_TEBloodSprite - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Client classes: CTEBloodSprite
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_TEBloodSprite : Base
{
    NETVAR_FRAGMENT(DT_TEBloodSprite)

    NETVAR_FIELD(Vector, m_vecOrigin) // 0x10
    NETVAR_FIELD(Vector, m_vecDirection) // 0x1C
    NETVAR_FIELD(int32_t, r) // 0x28
    NETVAR_FIELD(int32_t, g) // 0x2C
    NETVAR_FIELD(int32_t, b) // 0x30
    NETVAR_FIELD(int32_t, a) // 0x34
    NETVAR_FIELD(int32_t, m_nDropModel) // 0x38
    NETVAR_FIELD(int32_t, m_nSprayModel) // 0x3C
    NETVAR_FIELD(int32_t, m_nSize) // 0x40
};

} // namespace Netvar
