// CWeaponSG550, the table DT_WeaponSG550 - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CWeaponCSBaseGun
// Server classes: CWeaponSG550
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CWeaponSG550 : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_WeaponSG550)
};

} // namespace NetvarServer
