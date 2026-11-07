// CAI_BaseNPC, the table DT_AI_BaseNPC - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseCombatCharacter
// Server classes: CAI_BaseNPC
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CAI_BaseNPC : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_AI_BaseNPC)

    NETVAR_FIELD(int8_t, m_lifeState) // 0x8C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_iDeathPose) // 0x870
    NETVAR_FIELD(int32_t, m_iDeathFrame) // 0x874
    NETVAR_FIELD(int8_t, m_bPerformAvoidance) // 0xC94, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_bIsMoving) // 0xC95, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_bFadeCorpse) // 0xC96, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_bImportanRagdoll) // 0xC97, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_bSpeedModActive) // 0xC98, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_iSpeedModRadius) // 0xC9C
    NETVAR_FIELD(int32_t, m_iSpeedModSpeed) // 0xCA0
};

} // namespace NetvarServer
