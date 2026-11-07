// CWeaponM249, the table DT_WeaponM249 - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CWeaponCSBaseGun
// Server classes: CWeaponM249
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CWeaponM249 : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_WeaponM249)
};

} // namespace NetvarServer
