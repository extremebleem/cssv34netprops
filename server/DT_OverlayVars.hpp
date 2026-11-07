// DT_OverlayVars - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct DT_OverlayVars : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_OverlayVars)

    // not generated: m_AnimOverlay, 0x0: the receive tables of the game have no such sub-table, and a send prop does not say whether it sits inline
};

} // namespace NetvarServer
