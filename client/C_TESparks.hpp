// C_TESparks, the table DT_TESparks - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_TEParticleSystem
// Client classes: CTESparks
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_TESparks : Base
{
    NETVAR_FRAGMENT(DT_TESparks)

    NETVAR_FIELD(int32_t, m_nMagnitude) // 0x1C
    NETVAR_FIELD(int32_t, m_nTrailLength) // 0x20
    NETVAR_FIELD(Vector, m_vecDir) // 0x24
};

} // namespace Netvar
