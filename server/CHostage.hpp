// CHostage, the table DT_CHostage - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseCombatCharacter
// Server classes: CHostage
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CHostage : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_CHostage)

    NETVAR_FIELD(int32_t, m_iMaxHealth) // 0x84
    NETVAR_FIELD(int32_t, m_iHealth) // 0x88
    NETVAR_FIELD(int8_t, m_lifeState) // 0x8C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(CBaseHandle, m_leader) // 0x77C, flags 0x5 SPROP_UNSIGNED|SPROP_NOSCALE
    // not generated: m_flPoseParameter, 0x0: SPROP_EXCLUDE: this table does not send the prop of DT_BaseAnimating
    // not generated: m_flPlaybackRate, 0x0: SPROP_EXCLUDE: this table does not send the prop of DT_BaseAnimating
    // not generated: m_nSequence, 0x0: SPROP_EXCLUDE: this table does not send the prop of DT_BaseAnimating
    // not generated: m_nNewSequenceParity, 0x0: SPROP_EXCLUDE: this table does not send the prop of DT_BaseAnimating
    // not generated: m_nResetEventsParity, 0x0: SPROP_EXCLUDE: this table does not send the prop of DT_BaseAnimating
    // not generated: overlay_vars, 0x0: SPROP_EXCLUDE: this table does not send the prop of DT_BaseAnimatingOverlay
    // not generated: m_flCycle, 0x0: SPROP_EXCLUDE: this table does not send the prop of DT_ServerAnimationData
    // not generated: m_flAnimTime, 0x0: SPROP_EXCLUDE: this table does not send the prop of DT_AnimTimeMustBeFirst
    // not generated: m_isRescued, 0x778: the receive tables of the game list it: custom proxy 0x241BAD20, the width of the variable is not known
};

} // namespace NetvarServer
