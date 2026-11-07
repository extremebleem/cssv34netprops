// CEnvQuadraticBeam, the table DT_QuadraticBeam - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseEntity
// Server classes: CEnvQuadraticBeam
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CEnvQuadraticBeam : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_QuadraticBeam)

    NETVAR_FIELD(Vector, m_targetPosition) // 0x350, flags 0x2 SPROP_COORD
    NETVAR_FIELD(Vector, m_controlPosition) // 0x35C, flags 0x2 SPROP_COORD
    NETVAR_FIELD(float, m_scrollRate) // 0x368
    NETVAR_FIELD(float, m_flWidth) // 0x36C, flags 0x4 SPROP_NOSCALE
};

} // namespace NetvarServer
