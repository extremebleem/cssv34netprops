// DT_BaseDoor - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseEntity
// Client classes: CBaseDoor
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_BaseDoor : Base
{
    NETVAR_FRAGMENT(DT_BaseDoor)

    NETVAR_FIELD(float, m_flWaveHeight) // 0x460
};

} // namespace Netvar
