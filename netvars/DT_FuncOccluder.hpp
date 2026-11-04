// DT_FuncOccluder - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseEntity
// Client classes: CFuncOccluder
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_FuncOccluder : Base
{
    NETVAR_FRAGMENT(DT_FuncOccluder)

    NETVAR_FIELD(int32_t, m_nOccluderIndex) // 0x460
    NETVAR_FIELD(int8_t, m_bActive) // 0x464
};

} // namespace Netvar
