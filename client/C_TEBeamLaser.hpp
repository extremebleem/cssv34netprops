// C_TEBeamLaser, the table DT_TEBeamLaser - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_TEBaseBeam
// Client classes: CTEBeamLaser
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_TEBeamLaser : Base
{
    NETVAR_FRAGMENT(DT_TEBeamLaser)

    NETVAR_FIELD(int32_t, m_nStartEntity) // 0x4C
    NETVAR_FIELD(int32_t, m_nEndEntity) // 0x50
};

} // namespace Netvar
