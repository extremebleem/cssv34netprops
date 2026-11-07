// CCSGameRulesProxy, the table DT_CSGameRulesProxy - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CGameRulesProxy
// Server classes: CCSGameRulesProxy
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CCSGameRulesProxy : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_CSGameRulesProxy)

    // not generated: cs_gamerules_data, 0x0: the receive tables of the game have no such sub-table, and a send prop does not say whether it sits inline
};

} // namespace NetvarServer
