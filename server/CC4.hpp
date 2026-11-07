// CC4, the table DT_WeaponC4 - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CWeaponCSBase
// Server classes: CC4
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CC4 : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_WeaponC4)

    NETVAR_FIELD(int8_t, m_bStartedArming) // 0x55C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_fArmedTime) // 0x560, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(int8_t, m_bBombPlacedAnimation) // 0x564, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
