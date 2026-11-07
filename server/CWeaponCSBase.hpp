// CWeaponCSBase, the table DT_WeaponCSBase - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseCombatWeapon
// Server classes: CWeaponCSBase
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CWeaponCSBase : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_WeaponCSBase)

    // not generated: m_flAnimTime, 0x0: SPROP_EXCLUDE: this table does not send the prop of DT_AnimTimeMustBeFirst
    // not generated: m_nSequence, 0x0: SPROP_EXCLUDE: this table does not send the prop of DT_BaseAnimating
};

} // namespace NetvarServer
