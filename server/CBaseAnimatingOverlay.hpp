// CBaseAnimatingOverlay, the table DT_BaseAnimatingOverlay - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseAnimating
// Server classes: CBaseAnimatingOverlay
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CBaseAnimatingOverlay : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_BaseAnimatingOverlay)

    NETVAR_TABLE_NS(NetvarServer, DT_OverlayVars, overlay_vars) // 0x0, flags 0x1000 SPROP_COLLAPSIBLE
};

} // namespace NetvarServer
