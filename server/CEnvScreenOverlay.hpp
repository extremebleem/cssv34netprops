// CEnvScreenOverlay, the table DT_EnvScreenOverlay - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseEntity
// Server classes: CEnvScreenOverlay
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CEnvScreenOverlay : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_EnvScreenOverlay)

    NETVAR_FIELD(float, m_flStartTime) // 0x3A0, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(int32_t, m_iDesiredOverlay) // 0x3A4
    NETVAR_FIELD(int8_t, m_bIsActive) // 0x3A8, flags 0x1 SPROP_UNSIGNED
    // not generated: m_iszOverlayNames, 0x0: a send prop of an array says the stride of its elements, not the type of one element, and the receive tables of the game have no such field
    // not generated: m_flOverlayTimes, 0x0: a send prop of an array says the stride of its elements, not the type of one element, and the receive tables of the game have no such field
};

} // namespace NetvarServer
