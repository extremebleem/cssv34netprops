// DT_LocalWeaponData - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_LocalWeaponData : Base
{
    NETVAR_FRAGMENT(DT_LocalWeaponData)

    NETVAR_FIELD(int32_t, m_nViewModelIndex) // 0x6B4
    NETVAR_FIELD(int32_t, m_iPrimaryAmmoType) // 0x6F4
    NETVAR_FIELD(int32_t, m_iSecondaryAmmoType) // 0x6F8
    // not generated: m_iClip1, 0x6FC: custom proxy 0x24139F00, the width of the variable is not known
    // not generated: m_iClip2, 0x700: custom proxy 0x24139F00, the width of the variable is not known
};

} // namespace Netvar
