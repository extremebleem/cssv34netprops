// C_EntityDissolve, the table DT_EntityDissolve - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseEntity
// Client classes: CEntityDissolve
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_EntityDissolve : Base
{
    NETVAR_FRAGMENT(DT_EntityDissolve)

    NETVAR_FIELD(float, m_flStartTime) // 0x464
    NETVAR_FIELD(float, m_flFadeOutStart) // 0x468
    NETVAR_FIELD(float, m_flFadeOutLength) // 0x46C
    NETVAR_FIELD(float, m_flFadeOutModelStart) // 0x470
    NETVAR_FIELD(float, m_flFadeOutModelLength) // 0x474
    NETVAR_FIELD(float, m_flFadeInStart) // 0x478
    NETVAR_FIELD(float, m_flFadeInLength) // 0x47C
    NETVAR_FIELD(int32_t, m_nDissolveType) // 0x480
    NETVAR_FIELD(Vector, m_vDissolverOrigin) // 0x488
    NETVAR_FIELD(int32_t, m_nMagnitude) // 0x494
};

} // namespace Netvar
