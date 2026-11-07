// C_RopeKeyframe, the table DT_RopeKeyframe - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Client classes: CRopeKeyframe
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_RopeKeyframe : Base
{
    NETVAR_FRAGMENT(DT_RopeKeyframe)

    NETVAR_FIELD(int8_t, m_iParentAttachment) // 0x13C
    NETVAR_FIELD(Vector, m_vecOrigin) // 0x29C
    NETVAR_FIELD(float, m_flScrollSpeed) // 0x498
    NETVAR_FIELD(int32_t, m_RopeFlags) // 0x49C
    NETVAR_FIELD(int32_t, m_iRopeMaterialModel) // 0x4A0
    NETVAR_FIELD(int32_t, m_nSegments) // 0x730
    NETVAR_FIELD(CBaseHandle, m_hStartPoint) // 0x734
    NETVAR_FIELD(CBaseHandle, m_hEndPoint) // 0x738
    NETVAR_FIELD(int16_t, m_iStartAttachment) // 0x73C
    NETVAR_FIELD(int16_t, m_iEndAttachment) // 0x73E
    NETVAR_FIELD(int8_t, m_Subdiv) // 0x740
    NETVAR_FIELD(float, m_TextureScale) // 0x74C
    NETVAR_FIELD(int32_t, m_fLockedPoints) // 0x750
    NETVAR_FIELD(float, m_Width) // 0x754
    // not generated: m_Slack, 0x748: custom proxy 0x240732C0, the width of the variable is not known
    // not generated: m_RopeLength, 0x744: custom proxy 0x240732C0, the width of the variable is not known
    // not generated: moveparent, 0x154: custom proxy 0x2413A090, the width of the variable is not known
};

} // namespace Netvar
