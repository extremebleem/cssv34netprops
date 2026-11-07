// CTEBeamFollow, the table DT_TEBeamFollow - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CTEBaseBeam
// Server classes: CTEBeamFollow
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CTEBeamFollow : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_TEBeamFollow)

    NETVAR_FIELD(int32_t, m_iEntIndex) // 0x48, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
