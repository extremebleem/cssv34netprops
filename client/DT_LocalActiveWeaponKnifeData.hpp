// DT_LocalActiveWeaponKnifeData - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_LocalActiveWeaponKnifeData : Base
{
    NETVAR_FRAGMENT(DT_LocalActiveWeaponKnifeData)

    NETVAR_FIELD(float, m_flSmackTime) // 0x7D0
};

} // namespace Netvar
