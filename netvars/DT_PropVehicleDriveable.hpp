// DT_PropVehicleDriveable - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseAnimating
// Client classes: CPropVehicleDriveable
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_PropVehicleDriveable : Base
{
    NETVAR_FRAGMENT(DT_PropVehicleDriveable)

    NETVAR_FIELD(CBaseHandle, m_hPlayer) // 0x6B4
    NETVAR_FIELD(int32_t, m_nSpeed) // 0x6B8
    NETVAR_FIELD(int32_t, m_nRPM) // 0x6BC
    NETVAR_FIELD(float, m_flThrottle) // 0x6C0
    NETVAR_FIELD(int32_t, m_nBoostTimeLeft) // 0x6C4
    NETVAR_FIELD(int32_t, m_nHasBoost) // 0x6C8
    NETVAR_FIELD(int32_t, m_nScannerDisabledWeapons) // 0x6CC
    NETVAR_FIELD(int32_t, m_nScannerDisabledVehicle) // 0x6D0
    NETVAR_FIELD(int8_t, m_bEnterAnimOn) // 0x6F0
    NETVAR_FIELD(int8_t, m_bExitAnimOn) // 0x6F1
    NETVAR_FIELD(Vector, m_vecGunCrosshair) // 0x6F8
    NETVAR_FIELD(Vector, m_vecEyeExitEndpoint) // 0x72C
    NETVAR_FIELD(int8_t, m_bHasGun) // 0x738
    NETVAR_FIELD(int8_t, m_bUnableToFire) // 0x739
};

} // namespace Netvar
