// C_TEBloodStream, the table DT_TEBloodStream - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_TEParticleSystem
// Client classes: CTEBloodStream
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_TEBloodStream : Base
{
    NETVAR_FRAGMENT(DT_TEBloodStream)

    NETVAR_FIELD(Vector, m_vecDirection) // 0x1C
    NETVAR_FIELD(int32_t, r) // 0x28
    NETVAR_FIELD(int32_t, g) // 0x2C
    NETVAR_FIELD(int32_t, b) // 0x30
    NETVAR_FIELD(int32_t, a) // 0x34
    NETVAR_FIELD(int32_t, m_nAmount) // 0x38
};

} // namespace Netvar
