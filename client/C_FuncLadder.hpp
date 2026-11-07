// C_FuncLadder, the table DT_FuncLadder - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseEntity
// Client classes: CFuncLadder
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_FuncLadder : Base
{
    NETVAR_FRAGMENT(DT_FuncLadder)

    NETVAR_FIELD(Vector, m_vecLadderDir) // 0x460
    NETVAR_FIELD(Vector, m_vecPlayerMountPositionTop) // 0x480
    NETVAR_FIELD(Vector, m_vecPlayerMountPositionBottom) // 0x48C
    NETVAR_FIELD(int8_t, m_bFakeLadder) // 0x499
};

} // namespace Netvar
