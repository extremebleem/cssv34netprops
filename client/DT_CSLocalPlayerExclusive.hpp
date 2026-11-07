// DT_CSLocalPlayerExclusive - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_CSLocalPlayerExclusive : Base
{
    NETVAR_FRAGMENT(DT_CSLocalPlayerExclusive)

    NETVAR_FIELD(Vector, m_vecOrigin) // 0x29C
    NETVAR_FIELD(float, m_flStamina) // 0xFB0
    NETVAR_FIELD(int32_t, m_iDirection) // 0xFB4
    NETVAR_FIELD(int32_t, m_iShotsFired) // 0xFB8
    NETVAR_FIELD(float, m_flVelocityModifier) // 0xFC0
};

} // namespace Netvar
