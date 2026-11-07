// C_CSGameRulesProxy, the table DT_CSGameRulesProxy - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_GameRulesProxy
// Client classes: CCSGameRulesProxy
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_CSGameRulesProxy : Base
{
    NETVAR_FRAGMENT(DT_CSGameRulesProxy)

    // not generated: cs_gamerules_data, 0x0: a table behind a custom proxy: the object that the proxy returns is not inline in this one
};

} // namespace Netvar
