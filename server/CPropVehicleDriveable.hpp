// CPropVehicleDriveable, the table DT_PropVehicleDriveable - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseAnimating
// Server classes: CPropVehicleDriveable
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CPropVehicleDriveable : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_PropVehicleDriveable)

    NETVAR_FIELD(CBaseHandle, m_hPlayer) // 0x668, flags 0x5 SPROP_UNSIGNED|SPROP_NOSCALE
    NETVAR_FIELD(int32_t, m_nSpeed) // 0x66C
    NETVAR_FIELD(int32_t, m_nRPM) // 0x670
    NETVAR_FIELD(float, m_flThrottle) // 0x674, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(int32_t, m_nBoostTimeLeft) // 0x678
    NETVAR_FIELD(int32_t, m_nHasBoost) // 0x67C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(Vector, m_vecEyeExitEndpoint) // 0x680, flags 0x2 SPROP_COORD
    NETVAR_FIELD(Vector, m_vecGunCrosshair) // 0x68C, flags 0x2 SPROP_COORD
    NETVAR_FIELD(int8_t, m_bUnableToFire) // 0x698, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_bHasGun) // 0x699, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nScannerDisabledWeapons) // 0x69A, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nScannerDisabledVehicle) // 0x69B, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_bEnterAnimOn) // 0x6AC, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_bExitAnimOn) // 0x6AD, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
