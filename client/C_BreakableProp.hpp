// C_BreakableProp, the table DT_BreakableProp - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseAnimating
// Client classes: CBreakableProp
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_BreakableProp : Base
{
    NETVAR_FRAGMENT(DT_BreakableProp)
};

} // namespace Netvar
