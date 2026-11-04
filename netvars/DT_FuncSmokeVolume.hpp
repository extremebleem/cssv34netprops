// DT_FuncSmokeVolume - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseParticleEntity
// Client classes: CFuncSmokeVolume
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_FuncSmokeVolume : Base
{
    NETVAR_FRAGMENT(DT_FuncSmokeVolume)

    NETVAR_TABLE(DT_CollisionProperty, m_Collision) // 0x160
    NETVAR_FIELD_STRING(m_MaterialName, 255) // 0x554, char[255]
    NETVAR_FIELD(float, m_ParticleDrawWidth) // 0x654
    NETVAR_FIELD(float, m_ParticleSpacingDistance) // 0x658
    NETVAR_FIELD(float, m_DensityRampSpeed) // 0x65C
    NETVAR_FIELD(float, m_RotationSpeed) // 0x660
    NETVAR_FIELD(float, m_MovementSpeed) // 0x664
    NETVAR_FIELD(float, m_Density) // 0x668
    NETVAR_FIELD(int32_t, m_spawnflags) // 0x66C
    // not generated: m_Color1, 0x54C: custom proxy 0x24139ED0, the width of the variable is not known
    // not generated: m_Color2, 0x550: custom proxy 0x24139ED0, the width of the variable is not known
};

} // namespace Netvar
