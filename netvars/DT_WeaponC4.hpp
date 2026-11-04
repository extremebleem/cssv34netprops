// DT_WeaponC4 - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_WeaponCSBase
// Client classes: CC4
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_WeaponC4 : Base
{
    NETVAR_FRAGMENT(DT_WeaponC4)

    NETVAR_FIELD(int8_t, m_bStartedArming) // 0x798
    NETVAR_FIELD(float, m_fArmedTime) // 0x79C
    NETVAR_FIELD(int8_t, m_bBombPlacedAnimation) // 0x7A0
};

} // namespace Netvar
