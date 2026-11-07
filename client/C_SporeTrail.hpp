// C_SporeTrail, the table DT_SporeTrail - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseParticleEntity
// Client classes: SporeTrail
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_SporeTrail : Base
{
    NETVAR_FRAGMENT(DT_SporeTrail)

    NETVAR_FIELD(Vector, m_vecEndColor) // 0x548
    NETVAR_FIELD(float, m_flSpawnRate) // 0x554
    NETVAR_FIELD(float, m_flParticleLifetime) // 0x558
    NETVAR_FIELD(float, m_flStartSize) // 0x55C
    NETVAR_FIELD(float, m_flEndSize) // 0x560
    NETVAR_FIELD(float, m_flSpawnRadius) // 0x564
    NETVAR_FIELD(int8_t, m_bEmit) // 0x574
};

} // namespace Netvar
