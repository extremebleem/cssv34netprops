// C_FireSmoke, the table DT_FireSmoke - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseEntity
// Client classes: CFireSmoke
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_FireSmoke : Base
{
    NETVAR_FRAGMENT(DT_FireSmoke)

    NETVAR_FIELD(float, m_flStartScale) // 0x460
    NETVAR_FIELD(int32_t, m_nFlags) // 0x46C
    NETVAR_FIELD(int32_t, m_nFlameModelIndex) // 0x470
    NETVAR_FIELD(int32_t, m_nFlameFromAboveModelIndex) // 0x474
    // not generated: m_flScale, 0x464: custom proxy 0x2405B860, the width of the variable is not known
    // not generated: m_flScaleTime, 0x468: custom proxy 0x2405B8B0, the width of the variable is not known
};

} // namespace Netvar
