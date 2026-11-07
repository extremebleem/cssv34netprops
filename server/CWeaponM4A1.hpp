// CWeaponM4A1, the table DT_WeaponM4A1 - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CWeaponCSBaseGun
// Server classes: CWeaponM4A1
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CWeaponM4A1 : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_WeaponM4A1)

    NETVAR_FIELD(int8_t, m_bSilencerOn) // 0x560, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_flDoneSwitchingSilencer) // 0x564, flags 0x4 SPROP_NOSCALE
};

} // namespace NetvarServer
