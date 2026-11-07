// DT_LocalActiveWeaponData - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct DT_LocalActiveWeaponData : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_LocalActiveWeaponData)

    NETVAR_FIELD(int32_t, m_nNextThinkTick) // 0x68
    NETVAR_FIELD(float, m_flNextPrimaryAttack) // 0x470, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flNextSecondaryAttack) // 0x474, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flTimeWeaponIdle) // 0x478, flags 0x4 SPROP_NOSCALE
};

} // namespace NetvarServer
