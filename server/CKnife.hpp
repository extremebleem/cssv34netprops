// CKnife, the table DT_WeaponKnife - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CWeaponCSBase
// Server classes: CKnife
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CKnife : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_WeaponKnife)

    NETVAR_TABLE_NS(NetvarServer, DT_LocalActiveWeaponKnifeData, LocalActiveWeaponKnifeData) // 0x0
};

} // namespace NetvarServer
