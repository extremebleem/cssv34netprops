// CBaseFlex, the table DT_BaseFlex - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseAnimatingOverlay
// Server classes: CBaseFlex
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CBaseFlex : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_BaseFlex)

    NETVAR_FIELD_ARRAY(float, m_flexWeight, 64) // 0x47C, flags 0x200 SPROP_PROXY_ALWAYS_YES, float[64]
    NETVAR_FIELD(Vector, m_viewtarget) // 0x57C, flags 0x2 SPROP_COORD
    NETVAR_FIELD(int32_t, m_blinktoggle) // 0x588, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
