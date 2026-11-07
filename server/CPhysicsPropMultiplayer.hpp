// CPhysicsPropMultiplayer, the table DT_PhysicsPropMultiplayer - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CPhysicsProp
// Server classes: CPhysicsPropMultiplayer
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CPhysicsPropMultiplayer : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_PhysicsPropMultiplayer)

    NETVAR_FIELD(int32_t, m_iPhysicsMode) // 0x65C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_fMass) // 0x660, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(Vector, m_collisionMins) // 0x668, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(Vector, m_collisionMaxs) // 0x674, flags 0x4 SPROP_NOSCALE
};

} // namespace NetvarServer
