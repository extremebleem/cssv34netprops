// C_FootstepControl, the table DT_FootstepControl - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseEntity
// Client classes: CFootstepControl
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_FootstepControl : Base
{
    NETVAR_FRAGMENT(DT_FootstepControl)

    NETVAR_FIELD_STRING(m_source, 16) // 0x460, char[16]
    NETVAR_FIELD_STRING(m_destination, 16) // 0x470, char[16]
};

} // namespace Netvar
