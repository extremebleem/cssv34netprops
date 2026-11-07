// C_Test_ProxyToggle_Networkable, the table DT_ProxyToggle - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseEntity
// Client classes: CTest_ProxyToggle_Networkable
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_Test_ProxyToggle_Networkable : Base
{
    NETVAR_FRAGMENT(DT_ProxyToggle)

    NETVAR_TABLE(DT_ProxyToggle_ProxiedData, blah) // 0x0
};

} // namespace Netvar
