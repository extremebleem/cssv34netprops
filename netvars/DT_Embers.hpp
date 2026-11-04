// DT_Embers - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseEntity
// Client classes: CEmbers
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_Embers : Base
{
    NETVAR_FRAGMENT(DT_Embers)

    NETVAR_FIELD(int32_t, m_nDensity) // 0x460
    NETVAR_FIELD(int32_t, m_nLifetime) // 0x464
    NETVAR_FIELD(int32_t, m_nSpeed) // 0x468
    NETVAR_FIELD(int8_t, m_bEmit) // 0x46C
};

} // namespace Netvar
