// C_Hostage, the table DT_CHostage - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseCombatCharacter
// Client classes: CHostage
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_Hostage : Base
{
    NETVAR_FRAGMENT(DT_CHostage)

    NETVAR_FIELD(int8_t, m_lifeState) // 0x87
    NETVAR_FIELD(int32_t, m_iHealth) // 0x88
    NETVAR_FIELD(int32_t, m_iMaxHealth) // 0xB48
    NETVAR_FIELD(CBaseHandle, m_leader) // 0xB50
    // not generated: m_isRescued, 0xB54: custom proxy 0x241BAD20, the width of the variable is not known
};

} // namespace Netvar
