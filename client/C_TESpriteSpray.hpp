// C_TESpriteSpray, the table DT_TESpriteSpray - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseTempEntity
// Client classes: CTESpriteSpray
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_TESpriteSpray : Base
{
    NETVAR_FRAGMENT(DT_TESpriteSpray)

    NETVAR_FIELD(Vector, m_vecOrigin) // 0x10
    NETVAR_FIELD(Vector, m_vecDirection) // 0x1C
    NETVAR_FIELD(int32_t, m_nModelIndex) // 0x28
    NETVAR_FIELD(int32_t, m_nSpeed) // 0x2C
    NETVAR_FIELD(float, m_fNoise) // 0x30
    NETVAR_FIELD(int32_t, m_nCount) // 0x34
};

} // namespace Netvar
