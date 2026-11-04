// DT_DynamicProp - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BreakableProp
// Client classes: CDynamicProp
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_DynamicProp : Base
{
    NETVAR_FRAGMENT(DT_DynamicProp)

    NETVAR_FIELD(int8_t, m_bUseHitboxesForRenderBox) // 0x6B0
};

} // namespace Netvar
