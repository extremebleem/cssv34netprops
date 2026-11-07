// CFuncSmokeVolume, the table DT_FuncSmokeVolume - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseParticleEntity
// Server classes: CFuncSmokeVolume
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CFuncSmokeVolume : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_FuncSmokeVolume)

    NETVAR_FIELD(int32_t, m_spawnflags) // 0xA4, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD_STRING(m_MaterialName, 255) // 0x358, char[255]
    NETVAR_FIELD(float, m_ParticleDrawWidth) // 0x45C, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_ParticleSpacingDistance) // 0x460, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_DensityRampSpeed) // 0x464, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_RotationSpeed) // 0x468, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_MovementSpeed) // 0x46C, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_Density) // 0x470, flags 0x4 SPROP_NOSCALE
    // not generated: m_Color1, 0x350: the receive tables of the game list it: custom proxy 0x24139ED0, the width of the variable is not known
    // not generated: m_Color2, 0x354: the receive tables of the game list it: custom proxy 0x24139ED0, the width of the variable is not known
};

} // namespace NetvarServer
