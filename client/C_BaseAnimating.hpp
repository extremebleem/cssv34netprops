// C_BaseAnimating, the table DT_BaseAnimating - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseEntity
// Client classes: CBaseAnimating
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_BaseAnimating : Base
{
    NETVAR_FRAGMENT(DT_BaseAnimating)

    NETVAR_TABLE(DT_ServerAnimationData, serveranimdata) // 0x0
    NETVAR_FIELD(int32_t, m_nSkin) // 0x464
    NETVAR_FIELD(int32_t, m_nBody) // 0x468
    NETVAR_FIELD(int32_t, m_nHitboxSet) // 0x46C
    NETVAR_FIELD(float, m_flPlaybackRate) // 0x48C
    NETVAR_FIELD(int8_t, m_bClientSideFrameReset) // 0x4B8
    NETVAR_FIELD(float, m_fadeMinDist) // 0x4BC
    NETVAR_FIELD(float, m_fadeMaxDist) // 0x4C0
    NETVAR_FIELD(float, m_flFadeScale) // 0x4C4
    NETVAR_FIELD(Vector, m_vecForce) // 0x4D4
    NETVAR_FIELD(int32_t, m_nForceBone) // 0x4E0
    NETVAR_FIELD(float, m_flModelWidthScale) // 0x514
    NETVAR_FIELD_ARRAY(float, m_flPoseParameter, 24) // 0x518, float[24]
    NETVAR_FIELD_ARRAY(float, m_flEncodedController, 4) // 0x5CC, float[4]
    NETVAR_FIELD(int8_t, m_bClientSideAnimation) // 0x604
    NETVAR_FIELD(int32_t, m_nNewSequenceParity) // 0x608
    NETVAR_FIELD(int32_t, m_nResetEventsParity) // 0x60C
    NETVAR_FIELD(int32_t, m_nSequence) // 0x634
    NETVAR_FIELD(CBaseHandle, m_hLightingOrigin) // 0x69C
    NETVAR_FIELD(CBaseHandle, m_hLightingOriginRelative) // 0x6A0
    NETVAR_FIELD(int8_t, m_nMuzzleFlashParity) // 0x6A4
};

} // namespace Netvar
