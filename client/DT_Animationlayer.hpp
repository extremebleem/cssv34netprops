// DT_Animationlayer - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_Animationlayer : Base
{
    NETVAR_FRAGMENT(DT_Animationlayer)

    NETVAR_FIELD(int32_t, m_nSequence) // 0x0
    NETVAR_FIELD(float, m_flPrevCycle) // 0x4
    NETVAR_FIELD(float, m_flWeight) // 0x8
    NETVAR_FIELD(int32_t, m_nOrder) // 0xC
    NETVAR_FIELD(float, m_flCycle) // 0x14
};

} // namespace Netvar
