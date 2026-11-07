// CTELargeFunnel, the table DT_TELargeFunnel - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CTEParticleSystem
// Server classes: CTELargeFunnel
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CTELargeFunnel : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_TELargeFunnel)

    NETVAR_FIELD(int32_t, m_nModelIndex) // 0x18
    NETVAR_FIELD(int32_t, m_nReversed) // 0x1C, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
