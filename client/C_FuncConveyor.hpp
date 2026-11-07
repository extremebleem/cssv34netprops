// C_FuncConveyor, the table DT_FuncConveyor - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseEntity
// Client classes: CFuncConveyor
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_FuncConveyor : Base
{
    NETVAR_FRAGMENT(DT_FuncConveyor)

    NETVAR_FIELD(float, m_flConveyorSpeed) // 0x460
};

} // namespace Netvar
