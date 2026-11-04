// DT_PredictableId - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_PredictableId : Base
{
    NETVAR_FRAGMENT(DT_PredictableId)

    NETVAR_FIELD(int8_t, m_bIsPlayerSimulated) // 0x428
    // not generated: m_PredictableID, 0x94: custom proxy 0x2413A000, the width of the variable is not known
};

} // namespace Netvar
