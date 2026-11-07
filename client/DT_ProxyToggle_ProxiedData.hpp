// DT_ProxyToggle_ProxiedData - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_ProxyToggle_ProxiedData : Base
{
    NETVAR_FRAGMENT(DT_ProxyToggle_ProxiedData)

    NETVAR_FIELD(int32_t, m_WithProxy) // 0x460
};

} // namespace Netvar
