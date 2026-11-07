// CBaseCSGrenade, the table DT_BaseCSGrenade - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CWeaponCSBase
// Server classes: CBaseCSGrenade
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CBaseCSGrenade : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_BaseCSGrenade)

    NETVAR_FIELD(int8_t, m_bRedraw) // 0x55C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_bPinPulled) // 0x55D, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_fThrowTime) // 0x560, flags 0x4 SPROP_NOSCALE
};

} // namespace NetvarServer
