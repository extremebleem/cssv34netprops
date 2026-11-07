// C_CSRagdoll, the table DT_CSRagdoll - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Client classes: CCSRagdoll
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_CSRagdoll : Base
{
    NETVAR_FRAGMENT(DT_CSRagdoll)

    NETVAR_FIELD(int16_t, m_nModelIndex) // 0x84
    NETVAR_FIELD(int32_t, m_iTeamNum) // 0x90
    NETVAR_FIELD(Vector, m_vecOrigin) // 0x29C
    NETVAR_FIELD(Vector, m_vecForce) // 0x4D4
    NETVAR_FIELD(int32_t, m_nForceBone) // 0x4E0
    NETVAR_FIELD(int8_t, m_bClientSideAnimation) // 0x604
    NETVAR_FIELD(CBaseHandle, m_hPlayer) // 0x718
    NETVAR_FIELD(Vector, m_vecRagdollVelocity) // 0x71C
    NETVAR_FIELD(Vector, m_vecRagdollOrigin) // 0x728
    NETVAR_FIELD(int32_t, m_iDeathPose) // 0x734
    NETVAR_FIELD(int32_t, m_iDeathFrame) // 0x738
};

} // namespace Netvar
