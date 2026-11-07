// CCSPlayer, the table DT_CSPlayer - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBasePlayer
// Server classes: CCSPlayer
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CCSPlayer : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_CSPlayer)

    NETVAR_TABLE_NS(NetvarServer, DT_CSLocalPlayerExclusive, cslocaldata) // 0x0
    NETVAR_TABLE_NS(NetvarServer, DT_CSNonLocalPlayerExclusive, csnonlocaldata) // 0x0
    NETVAR_FIELD(int32_t, m_ArmorValue) // 0xBF8
    NETVAR_FIELD(int32_t, m_iPlayerState) // 0xDE8, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_bIsDefusing) // 0xE04, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_bHasHelmet) // 0xE0C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_iAccount) // 0xE1C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_bHasNightVision) // 0xE49, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_bInBombZone) // 0x1258, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_bInBuyZone) // 0x1259, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_bInHostageRescueZone) // 0x1260, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_flFlashMaxAlpha) // 0x12A8, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flProgressBarStartTime) // 0x12AC, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(int32_t, m_iProgressBarDuration) // 0x12B0, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_iThrowGrenadeCounter) // 0x12B4, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(CBaseHandle, m_hRagdoll) // 0x12B8, flags 0x5 SPROP_UNSIGNED|SPROP_NOSCALE
    NETVAR_FIELD(int32_t, m_iClass) // 0x12EC, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD_AS(float, m_angEyeAngles_0_, "m_angEyeAngles[0]") // 0x1310, flags 0xC00 SPROP_CHANGES_OFTEN|SPROP_IS_A_VECTOR_ELEM
    NETVAR_FIELD_AS(float, m_angEyeAngles_1_, "m_angEyeAngles[1]") // 0x1314, flags 0xC00 SPROP_CHANGES_OFTEN|SPROP_IS_A_VECTOR_ELEM
    NETVAR_FIELD(int32_t, m_iAddonBits) // 0x13C0, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_iPrimaryAddon) // 0x13C4, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_iSecondaryAddon) // 0x13C8, flags 0x1 SPROP_UNSIGNED
    // not generated: m_flPoseParameter, 0x0: SPROP_EXCLUDE: this table does not send the prop of DT_BaseAnimating
    // not generated: m_flPlaybackRate, 0x0: SPROP_EXCLUDE: this table does not send the prop of DT_BaseAnimating
    // not generated: m_nSequence, 0x0: SPROP_EXCLUDE: this table does not send the prop of DT_BaseAnimating
    // not generated: m_nNewSequenceParity, 0x0: SPROP_EXCLUDE: this table does not send the prop of DT_BaseAnimating
    // not generated: m_nResetEventsParity, 0x0: SPROP_EXCLUDE: this table does not send the prop of DT_BaseAnimating
    // not generated: m_nMuzzleFlashParity, 0x0: SPROP_EXCLUDE: this table does not send the prop of DT_BaseAnimating
    // not generated: m_angRotation, 0x0: SPROP_EXCLUDE: this table does not send the prop of DT_BaseEntity
    // not generated: overlay_vars, 0x0: SPROP_EXCLUDE: this table does not send the prop of DT_BaseAnimatingOverlay
    // not generated: m_flCycle, 0x0: SPROP_EXCLUDE: this table does not send the prop of DT_ServerAnimationData
    // not generated: m_flAnimTime, 0x0: SPROP_EXCLUDE: this table does not send the prop of DT_AnimTimeMustBeFirst
    // not generated: m_vecOrigin, 0x0: SPROP_EXCLUDE: this table does not send the prop of DT_BaseEntity
    // not generated: m_bHasDefuser, 0xE48: the receive tables of the game list it: custom proxy 0x241BC400, the width of the variable is not known
    // not generated: m_bNightVisionOn, 0xE4A: the receive tables of the game list it: custom proxy 0x241BE9D0, the width of the variable is not known
    // not generated: m_flFlashDuration, 0x12A4: the receive tables of the game list it: custom proxy 0x241BEA10, the width of the variable is not known
    // not generated: m_cycleLatch, 0x1444: the receive tables of the game list it: custom proxy 0x241BC470, the width of the variable is not known
};

} // namespace NetvarServer
