// DT_WeaponUSP - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_WeaponCSBase
// Client classes: CWeaponUSP
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_WeaponUSP : Base
{
    NETVAR_FRAGMENT(DT_WeaponUSP)

    NETVAR_FIELD(int8_t, m_bSilencerOn) // 0x778
    NETVAR_FIELD(float, m_flDoneSwitchingSilencer) // 0x77C
};

} // namespace Netvar
