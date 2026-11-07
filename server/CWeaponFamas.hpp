// CWeaponFamas, the table DT_WeaponFamas - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CWeaponCSBase
// Server classes: CWeaponFamas
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CWeaponFamas : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_WeaponFamas)

    NETVAR_FIELD(int8_t, m_bBurstMode) // 0x560, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
