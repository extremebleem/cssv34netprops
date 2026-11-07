// CBaseCombatCharacter, the table DT_BaseCombatCharacter - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseFlex
// Server classes: CBaseCombatCharacter
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CBaseCombatCharacter : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_BaseCombatCharacter)

    NETVAR_TABLE_NS(NetvarServer, DT_BCCLocalPlayerExclusive, bcc_localdata) // 0x0
    NETVAR_FIELD(CBaseHandle, m_hActiveWeapon) // 0x768, flags 0x5 SPROP_UNSIGNED|SPROP_NOSCALE
};

} // namespace NetvarServer
