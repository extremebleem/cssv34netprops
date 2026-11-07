// CWeaponGlock, the table DT_WeaponGlock - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CWeaponCSBase
// Server classes: CWeaponGlock
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CWeaponGlock : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_WeaponGlock)

    NETVAR_FIELD(int8_t, m_bBurstMode) // 0x55C, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
