// C_EnvQuadraticBeam, the table DT_QuadraticBeam - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseEntity
// Client classes: CEnvQuadraticBeam
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_EnvQuadraticBeam : Base
{
    NETVAR_FRAGMENT(DT_QuadraticBeam)

    NETVAR_FIELD(Vector, m_targetPosition) // 0x460
    NETVAR_FIELD(Vector, m_controlPosition) // 0x46C
    NETVAR_FIELD(float, m_scrollRate) // 0x478
    NETVAR_FIELD(float, m_flWidth) // 0x47C
};

} // namespace Netvar
