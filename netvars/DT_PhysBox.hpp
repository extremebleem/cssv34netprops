// DT_PhysBox - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseEntity
// Client classes: CPhysBox
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_PhysBox : Base
{
    NETVAR_FRAGMENT(DT_PhysBox)

    NETVAR_FIELD(float, m_mass) // 0x460
};

} // namespace Netvar
