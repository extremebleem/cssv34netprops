// CPointCommentaryNode, the table DT_PointCommentaryNode - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseAnimating
// Server classes: CPointCommentaryNode
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CPointCommentaryNode : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_PointCommentaryNode)

    NETVAR_FIELD_STRING(m_iszCommentaryFile, 260) // 0x470, char[260]
    NETVAR_FIELD_STRING(m_iszCommentaryFileNoHDR, 260) // 0x474, char[260]
    NETVAR_FIELD(CBaseHandle, m_hViewPosition) // 0x484, flags 0x5 SPROP_UNSIGNED|SPROP_NOSCALE
    NETVAR_FIELD(int8_t, m_bActive) // 0x4EC, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_flStartTime) // 0x4F0, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD_STRING(m_iszSpeakers, 256) // 0x4F4, char[256]
    NETVAR_FIELD(int32_t, m_iNodeNumber) // 0x4F8, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_iNodeNumberMax) // 0x4FC, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
