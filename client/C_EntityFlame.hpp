// C_EntityFlame, the table DT_EntityFlame - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseEntity
// Client classes: CEntityFlame
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_EntityFlame : Base
{
    NETVAR_FRAGMENT(DT_EntityFlame)

    NETVAR_FIELD(CBaseHandle, m_hEntAttached) // 0x460
    NETVAR_FIELD(int8_t, m_bUseHitboxes) // 0x464
    NETVAR_FIELD(float, m_flSize) // 0x490
    NETVAR_FIELD(float, m_flLifetime) // 0x4A4
};

} // namespace Netvar
