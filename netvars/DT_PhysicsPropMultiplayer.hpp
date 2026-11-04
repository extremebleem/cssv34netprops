// DT_PhysicsPropMultiplayer - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_PhysicsProp
// Client classes: CPhysicsPropMultiplayer
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_PhysicsPropMultiplayer : Base
{
    NETVAR_FRAGMENT(DT_PhysicsPropMultiplayer)

    NETVAR_FIELD(int32_t, m_iPhysicsMode) // 0x6BC
    NETVAR_FIELD(float, m_fMass) // 0x6C0
    NETVAR_FIELD(Vector, m_collisionMins) // 0x6C4
    NETVAR_FIELD(Vector, m_collisionMaxs) // 0x6D0
};

} // namespace Netvar
