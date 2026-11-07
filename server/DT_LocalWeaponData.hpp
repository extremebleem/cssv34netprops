// DT_LocalWeaponData - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct DT_LocalWeaponData : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_LocalWeaponData)

    NETVAR_FIELD(int32_t, m_nViewModelIndex) // 0x46C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_iPrimaryAmmoType) // 0x4AC
    NETVAR_FIELD(int32_t, m_iSecondaryAmmoType) // 0x4B0
    // not generated: m_iClip1, 0x4B4: the receive tables of the game list it: custom proxy 0x24139F00, the width of the variable is not known
    // not generated: m_iClip2, 0x4B8: the receive tables of the game list it: custom proxy 0x24139F00, the width of the variable is not known
};

} // namespace NetvarServer
