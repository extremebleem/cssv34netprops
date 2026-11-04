// DT_WeaponM4A1 - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_WeaponCSBaseGun
// Client classes: CWeaponM4A1
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_WeaponM4A1 : Base
{
    NETVAR_FRAGMENT(DT_WeaponM4A1)

    NETVAR_FIELD(int8_t, m_bSilencerOn) // 0x780
    NETVAR_FIELD(float, m_flDoneSwitchingSilencer) // 0x784
};

} // namespace Netvar
