// DT_TEBeamEntPoint - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseBeam
// Client classes: CTEBeamEntPoint
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_TEBeamEntPoint : Base
{
    NETVAR_FRAGMENT(DT_TEBeamEntPoint)

    NETVAR_FIELD(int32_t, m_nStartEntity) // 0x4C
    NETVAR_FIELD(int32_t, m_nEndEntity) // 0x50
    NETVAR_FIELD(Vector, m_vecStartPoint) // 0x54
    NETVAR_FIELD(Vector, m_vecEndPoint) // 0x60
};

} // namespace Netvar
