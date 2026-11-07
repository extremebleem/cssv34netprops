// C_SporeExplosion, the table DT_SporeExplosion - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseParticleEntity
// Client classes: SporeExplosion
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_SporeExplosion : Base
{
    NETVAR_FRAGMENT(DT_SporeExplosion)

    NETVAR_FIELD(float, m_flSpawnRate) // 0x54C
    NETVAR_FIELD(float, m_flParticleLifetime) // 0x550
    NETVAR_FIELD(float, m_flStartSize) // 0x554
    NETVAR_FIELD(float, m_flEndSize) // 0x558
    NETVAR_FIELD(float, m_flSpawnRadius) // 0x55C
    NETVAR_FIELD(int8_t, m_bEmit) // 0x564
    NETVAR_FIELD(int8_t, m_bDontRemove) // 0x565
};

} // namespace Netvar
