// CShadowControl, the table DT_ShadowControl - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Server classes: CShadowControl
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CShadowControl : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_ShadowControl)

    NETVAR_FIELD(Vector, m_shadowDirection) // 0x350, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(int32_t, m_shadowColor) // 0x35C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_flShadowMaxDist) // 0x360, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(int8_t, m_bDisableShadows) // 0x364, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
