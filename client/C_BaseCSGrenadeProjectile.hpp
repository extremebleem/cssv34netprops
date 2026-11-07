// C_BaseCSGrenadeProjectile, the table DT_BaseCSGrenadeProjectile - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseGrenade
// Client classes: CBaseCSGrenadeProjectile
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_BaseCSGrenadeProjectile : Base
{
    NETVAR_FRAGMENT(DT_BaseCSGrenadeProjectile)

    NETVAR_FIELD(Vector, m_vInitialVelocity) // 0xB60
};

} // namespace Netvar
