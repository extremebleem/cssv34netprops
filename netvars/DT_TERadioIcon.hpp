// DT_TERadioIcon - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseTempEntity
// Client classes: CTERadioIcon
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_TERadioIcon : Base
{
    NETVAR_FRAGMENT(DT_TERadioIcon)

    NETVAR_FIELD(int32_t, m_iAttachToClient) // 0x10
};

} // namespace Netvar
