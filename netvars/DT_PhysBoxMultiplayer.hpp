// DT_PhysBoxMultiplayer - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_PhysBox
// Client classes: CPhysBoxMultiplayer
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_PhysBoxMultiplayer : Base
{
    NETVAR_FRAGMENT(DT_PhysBoxMultiplayer)

    NETVAR_FIELD(int32_t, m_iPhysicsMode) // 0x46C
    NETVAR_FIELD(float, m_fMass) // 0x470
};

} // namespace Netvar
