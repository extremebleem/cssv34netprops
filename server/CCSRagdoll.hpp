// CCSRagdoll, the table DT_CSRagdoll - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Server classes: CCSRagdoll
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CCSRagdoll : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_CSRagdoll)

    NETVAR_FIELD(int16_t, m_nModelIndex) // 0x1E
    NETVAR_FIELD(int32_t, m_iTeamNum) // 0x208
    NETVAR_FIELD(Vector, m_vecOrigin) // 0x31C, flags 0x402 SPROP_COORD|SPROP_CHANGES_OFTEN
    NETVAR_FIELD(int32_t, m_nForceBone) // 0x358
    NETVAR_FIELD(Vector, m_vecForce) // 0x35C, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(int8_t, m_bClientSideAnimation) // 0x418, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(CBaseHandle, m_hPlayer) // 0x47C, flags 0x5 SPROP_UNSIGNED|SPROP_NOSCALE
    NETVAR_FIELD(Vector, m_vecRagdollVelocity) // 0x480, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(Vector, m_vecRagdollOrigin) // 0x48C, flags 0x2 SPROP_COORD
    NETVAR_FIELD(int32_t, m_iDeathPose) // 0x498, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_iDeathFrame) // 0x49C
};

} // namespace NetvarServer
