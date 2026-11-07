// DT_BCCLocalPlayerExclusive - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct DT_BCCLocalPlayerExclusive : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_BCCLocalPlayerExclusive)

    NETVAR_FIELD(float, m_flNextAttack) // 0x5E0, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD_ARRAY(CBaseHandle, m_hMyWeapons, 48) // 0x6A8, flags 0x200 SPROP_PROXY_ALWAYS_YES, CBaseHandle[48]
};

} // namespace NetvarServer
