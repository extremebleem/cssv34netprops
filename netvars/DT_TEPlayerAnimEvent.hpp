// DT_TEPlayerAnimEvent - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Client classes: CTEPlayerAnimEvent
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_TEPlayerAnimEvent : Base
{
    NETVAR_FRAGMENT(DT_TEPlayerAnimEvent)

    NETVAR_FIELD(CBaseHandle, m_hPlayer) // 0x10
    NETVAR_FIELD(int32_t, m_iEvent) // 0x14
};

} // namespace Netvar
