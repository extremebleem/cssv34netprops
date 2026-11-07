// C_BaseCombatCharacter, the table DT_BaseCombatCharacter - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseFlex
// Client classes: CBaseCombatCharacter
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_BaseCombatCharacter : Base
{
    NETVAR_FRAGMENT(DT_BaseCombatCharacter)

    NETVAR_TABLE(DT_BCCLocalPlayerExclusive, bcc_localdata) // 0x0
    NETVAR_FIELD(CBaseHandle, m_hActiveWeapon) // 0xB38
};

} // namespace Netvar
