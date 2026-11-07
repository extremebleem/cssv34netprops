// DT_LocalActiveWeaponKnifeData - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct DT_LocalActiveWeaponKnifeData : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_LocalActiveWeaponKnifeData)

    NETVAR_FIELD(float, m_flSmackTime) // 0x5B4, flags 0x4 SPROP_NOSCALE
};

} // namespace NetvarServer
