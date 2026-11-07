// C_TESprite, the table DT_TESprite - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseTempEntity
// Client classes: CTESprite
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_TESprite : Base
{
    NETVAR_FRAGMENT(DT_TESprite)

    NETVAR_FIELD(Vector, m_vecOrigin) // 0x10
    NETVAR_FIELD(int32_t, m_nModelIndex) // 0x1C
    NETVAR_FIELD(float, m_fScale) // 0x20
    NETVAR_FIELD(int32_t, m_nBrightness) // 0x24
};

} // namespace Netvar
