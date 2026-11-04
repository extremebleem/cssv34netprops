// DT_TEDynamicLight - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseTempEntity
// Client classes: CTEDynamicLight
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_TEDynamicLight : Base
{
    NETVAR_FRAGMENT(DT_TEDynamicLight)

    NETVAR_FIELD(Vector, m_vecOrigin) // 0x10
    NETVAR_FIELD(float, m_fRadius) // 0x1C
    NETVAR_FIELD(int32_t, r) // 0x20
    NETVAR_FIELD(int32_t, g) // 0x24
    NETVAR_FIELD(int32_t, b) // 0x28
    NETVAR_FIELD(int32_t, exponent) // 0x2C
    NETVAR_FIELD(float, m_fTime) // 0x30
    NETVAR_FIELD(float, m_fDecay) // 0x34
};

} // namespace Netvar
