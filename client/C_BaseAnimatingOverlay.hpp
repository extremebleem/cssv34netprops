// C_BaseAnimatingOverlay, the table DT_BaseAnimatingOverlay - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseAnimating
// Client classes: CBaseAnimatingOverlay
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_BaseAnimatingOverlay : Base
{
    NETVAR_FRAGMENT(DT_BaseAnimatingOverlay)

    NETVAR_TABLE(DT_OverlayVars, overlay_vars) // 0x0
};

} // namespace Netvar
