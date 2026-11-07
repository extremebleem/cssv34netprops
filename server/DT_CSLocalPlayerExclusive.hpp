// DT_CSLocalPlayerExclusive - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct DT_CSLocalPlayerExclusive : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_CSLocalPlayerExclusive)

    NETVAR_FIELD(Vector, m_vecOrigin) // 0x31C, flags 0x404 SPROP_NOSCALE|SPROP_CHANGES_OFTEN
    NETVAR_FIELD(float, m_flStamina) // 0x1264
    NETVAR_FIELD(int32_t, m_iDirection) // 0x1268, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_iShotsFired) // 0x126C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_flVelocityModifier) // 0x1270
};

} // namespace NetvarServer
