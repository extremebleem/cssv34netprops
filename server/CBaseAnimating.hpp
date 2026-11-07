// CBaseAnimating, the table DT_BaseAnimating - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseEntity
// Server classes: CBaseAnimating
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CBaseAnimating : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_BaseAnimating)

    NETVAR_TABLE_NS(NetvarServer, DT_ServerAnimationData, serveranimdata) // 0x0
    NETVAR_FIELD(int32_t, m_nForceBone) // 0x358
    NETVAR_FIELD(Vector, m_vecForce) // 0x35C, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(int32_t, m_nSkin) // 0x368
    NETVAR_FIELD(int32_t, m_nBody) // 0x36C
    NETVAR_FIELD(int32_t, m_nHitboxSet) // 0x370, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_flModelWidthScale) // 0x374, flags 0x10 SPROP_ROUNDUP
    NETVAR_FIELD(float, m_flPlaybackRate) // 0x378, flags 0x10 SPROP_ROUNDUP
    NETVAR_FIELD(int32_t, m_nSequence) // 0x3A4, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD_ARRAY(float, m_flPoseParameter, 24) // 0x3A8, flags 0x200 SPROP_PROXY_ALWAYS_YES, float[24]
    NETVAR_FIELD_ARRAY(float, m_flEncodedController, 4) // 0x408, flags 0x200 SPROP_PROXY_ALWAYS_YES, float[4]
    NETVAR_FIELD(int8_t, m_bClientSideAnimation) // 0x418, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_bClientSideFrameReset) // 0x419, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nNewSequenceParity) // 0x41C, flags 0x401 SPROP_UNSIGNED|SPROP_CHANGES_OFTEN
    NETVAR_FIELD(int32_t, m_nResetEventsParity) // 0x420, flags 0x401 SPROP_UNSIGNED|SPROP_CHANGES_OFTEN
    NETVAR_FIELD(int8_t, m_nMuzzleFlashParity) // 0x424, flags 0x401 SPROP_UNSIGNED|SPROP_CHANGES_OFTEN
    NETVAR_FIELD(CBaseHandle, m_hLightingOrigin) // 0x428, flags 0x5 SPROP_UNSIGNED|SPROP_NOSCALE
    NETVAR_FIELD(CBaseHandle, m_hLightingOriginRelative) // 0x42C, flags 0x5 SPROP_UNSIGNED|SPROP_NOSCALE
    NETVAR_FIELD(float, m_fadeMinDist) // 0x440, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_fadeMaxDist) // 0x444, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flFadeScale) // 0x448, flags 0x4 SPROP_NOSCALE
};

} // namespace NetvarServer
