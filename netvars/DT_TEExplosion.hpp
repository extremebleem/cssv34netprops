// DT_TEExplosion - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_TEParticleSystem
// Client classes: CTEExplosion
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_TEExplosion : Base
{
    NETVAR_FRAGMENT(DT_TEExplosion)

    NETVAR_FIELD(int32_t, m_nModelIndex) // 0x1C
    NETVAR_FIELD(float, m_fScale) // 0x20
    NETVAR_FIELD(int32_t, m_nFrameRate) // 0x24
    NETVAR_FIELD(int32_t, m_nFlags) // 0x28
    NETVAR_FIELD(Vector, m_vecNormal) // 0x2C
    NETVAR_FIELD(int8_t, m_chMaterialType) // 0x38
    NETVAR_FIELD(int32_t, m_nRadius) // 0x3C
    NETVAR_FIELD(int32_t, m_nMagnitude) // 0x40
};

} // namespace Netvar
