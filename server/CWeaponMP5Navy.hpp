// CWeaponMP5Navy, the table DT_WeaponMP5Navy - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CWeaponCSBaseGun
// Server classes: CWeaponMP5Navy
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CWeaponMP5Navy : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_WeaponMP5Navy)
};

} // namespace NetvarServer
