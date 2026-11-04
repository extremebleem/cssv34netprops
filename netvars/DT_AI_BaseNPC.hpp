// DT_AI_BaseNPC - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseCombatCharacter
// Client classes: CAI_BaseNPC
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_AI_BaseNPC : Base
{
    NETVAR_FRAGMENT(DT_AI_BaseNPC)

    NETVAR_FIELD(int8_t, m_lifeState) // 0x87
    NETVAR_FIELD(int8_t, m_bPerformAvoidance) // 0xB40
    NETVAR_FIELD(int8_t, m_bIsMoving) // 0xB41
    NETVAR_FIELD(int8_t, m_bFadeCorpse) // 0xB42
    NETVAR_FIELD(int32_t, m_iDeathPose) // 0xB44
    NETVAR_FIELD(int32_t, m_iDeathFrame) // 0xB48
    NETVAR_FIELD(int32_t, m_iSpeedModRadius) // 0xB4C
    NETVAR_FIELD(int32_t, m_iSpeedModSpeed) // 0xB50
    NETVAR_FIELD(int8_t, m_bSpeedModActive) // 0xB54
    NETVAR_FIELD(int8_t, m_bImportanRagdoll) // 0xB55
};

} // namespace Netvar
