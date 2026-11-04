// DT_WeaponKnife - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_WeaponCSBase
// Client classes: CKnife
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_WeaponKnife : Base
{
    NETVAR_FRAGMENT(DT_WeaponKnife)

    NETVAR_TABLE(DT_LocalActiveWeaponKnifeData, LocalActiveWeaponKnifeData) // 0x0
};

} // namespace Netvar
