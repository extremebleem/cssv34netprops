// CPhysBoxMultiplayer, the table DT_PhysBoxMultiplayer - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CPhysBox
// Server classes: CPhysBoxMultiplayer
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CPhysBoxMultiplayer : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_PhysBoxMultiplayer)

    NETVAR_FIELD(int32_t, m_iPhysicsMode) // 0x4D0, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_fMass) // 0x4D4, flags 0x4 SPROP_NOSCALE
};

} // namespace NetvarServer
