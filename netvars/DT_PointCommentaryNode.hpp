// DT_PointCommentaryNode - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseAnimating
// Client classes: CPointCommentaryNode
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_PointCommentaryNode : Base
{
    NETVAR_FRAGMENT(DT_PointCommentaryNode)

    NETVAR_FIELD(int8_t, m_bActive) // 0x6B0
    NETVAR_FIELD(float, m_flStartTime) // 0x6B4
    NETVAR_FIELD_STRING(m_iszCommentaryFile, 260) // 0x6B8, char[260]
    NETVAR_FIELD_STRING(m_iszCommentaryFileNoHDR, 260) // 0x7BC, char[260]
    NETVAR_FIELD_STRING(m_iszSpeakers, 256) // 0x8C0, char[256]
    NETVAR_FIELD(int32_t, m_iNodeNumber) // 0x9C0
    NETVAR_FIELD(int32_t, m_iNodeNumberMax) // 0x9C4
    NETVAR_FIELD(CBaseHandle, m_hViewPosition) // 0x9CC
};

} // namespace Netvar
