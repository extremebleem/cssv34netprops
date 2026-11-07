// CRopeKeyframe, the table DT_RopeKeyframe - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Server classes: CRopeKeyframe
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CRopeKeyframe : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_RopeKeyframe)

    NETVAR_FIELD(int8_t, m_iParentAttachment) // 0xDD, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(Vector, m_vecOrigin) // 0x31C, flags 0x2 SPROP_COORD
    NETVAR_FIELD(int32_t, m_RopeFlags) // 0x354, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_Width) // 0x360, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_TextureScale) // 0x364
    NETVAR_FIELD(int32_t, m_nSegments) // 0x368, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_iRopeMaterialModel) // 0x370, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_Subdiv) // 0x374, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_fLockedPoints) // 0x37C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_flScrollSpeed) // 0x384, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(CBaseHandle, m_hStartPoint) // 0x38C, flags 0x5 SPROP_UNSIGNED|SPROP_NOSCALE
    NETVAR_FIELD(CBaseHandle, m_hEndPoint) // 0x390, flags 0x5 SPROP_UNSIGNED|SPROP_NOSCALE
    NETVAR_FIELD(int16_t, m_iStartAttachment) // 0x394
    NETVAR_FIELD(int16_t, m_iEndAttachment) // 0x396
    // not generated: m_Slack, 0x35C: the receive tables of the game list it: custom proxy 0x240732C0, the width of the variable is not known
    // not generated: m_RopeLength, 0x378: the receive tables of the game list it: custom proxy 0x240732C0, the width of the variable is not known
    // not generated: moveparent, 0xE0: the receive tables of the game list it: custom proxy 0x2413A090, the width of the variable is not known
};

} // namespace NetvarServer
