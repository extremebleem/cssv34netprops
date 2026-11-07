// CBaseCombatWeapon, the table DT_BaseCombatWeapon - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseAnimating
// Server classes: CBaseCombatWeapon
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CBaseCombatWeapon : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_BaseCombatWeapon)

    NETVAR_TABLE_NS(NetvarServer, DT_LocalWeaponData, LocalWeaponData) // 0x0
    NETVAR_TABLE_NS(NetvarServer, DT_LocalActiveWeaponData, LocalActiveWeaponData) // 0x0
    NETVAR_FIELD(CBaseHandle, m_hOwner) // 0x468, flags 0x5 SPROP_UNSIGNED|SPROP_NOSCALE
    NETVAR_FIELD(int32_t, m_iViewModelIndex) // 0x480
    NETVAR_FIELD(int32_t, m_iWorldModelIndex) // 0x484
    NETVAR_FIELD(int32_t, m_iState) // 0x4A4, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
