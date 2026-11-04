// DT_WeaponGlock - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_WeaponCSBase
// Client classes: CWeaponGlock
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_WeaponGlock : Base
{
    NETVAR_FRAGMENT(DT_WeaponGlock)

    NETVAR_FIELD(int8_t, m_bBurstMode) // 0x778
};

} // namespace Netvar
