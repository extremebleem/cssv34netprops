// CTESparks, the table DT_TESparks - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CTEParticleSystem
// Server classes: CTESparks
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CTESparks : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_TESparks)

    NETVAR_FIELD(int32_t, m_nMagnitude) // 0x18, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nTrailLength) // 0x1C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(Vector, m_vecDir) // 0x20, flags 0x2 SPROP_COORD
};

} // namespace NetvarServer
