// DT_BCCLocalPlayerExclusive - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_BCCLocalPlayerExclusive : Base
{
    NETVAR_FRAGMENT(DT_BCCLocalPlayerExclusive)

    NETVAR_FIELD(float, m_flNextAttack) // 0x9F0
    NETVAR_FIELD_ARRAY(CBaseHandle, m_hMyWeapons, 48) // 0xA78, CBaseHandle[48]
};

} // namespace Netvar
