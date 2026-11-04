// DT_Func_LOD - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseEntity
// Client classes: CFunc_LOD
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_Func_LOD : Base
{
    NETVAR_FRAGMENT(DT_Func_LOD)

    NETVAR_FIELD(float, m_fDisappearDist) // 0x460
};

} // namespace Netvar
