// C_CSPlayer, the table DT_CSPlayer - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BasePlayer
// Client classes: CCSPlayer
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_CSPlayer : Base
{
    NETVAR_FRAGMENT(DT_CSPlayer)

    NETVAR_TABLE(DT_CSLocalPlayerExclusive, cslocaldata) // 0x0
    NETVAR_TABLE(DT_CSNonLocalPlayerExclusive, csnonlocaldata) // 0x0
    NETVAR_FIELD(int32_t, m_iPlayerState) // 0xF90
    NETVAR_FIELD(int8_t, m_bIsDefusing) // 0xF94
    NETVAR_FIELD(int8_t, m_bInBombZone) // 0xF95
    NETVAR_FIELD(int8_t, m_bInBuyZone) // 0xF96
    NETVAR_FIELD(int32_t, m_iThrowGrenadeCounter) // 0xF98
    NETVAR_FIELD(int32_t, m_iAddonBits) // 0xF9C
    NETVAR_FIELD(int32_t, m_iPrimaryAddon) // 0xFA0
    NETVAR_FIELD(int32_t, m_iSecondaryAddon) // 0xFA4
    NETVAR_FIELD(int32_t, m_iProgressBarDuration) // 0xFA8
    NETVAR_FIELD(float, m_flProgressBarStartTime) // 0xFAC
    NETVAR_FIELD(float, m_flStamina) // 0xFB0
    NETVAR_FIELD(int8_t, m_bHasNightVision) // 0xFBD
    NETVAR_FIELD(CBaseHandle, m_hRagdoll) // 0xFC4
    NETVAR_FIELD(float, m_flFlashMaxAlpha) // 0xFD4
    NETVAR_FIELD(int32_t, m_iAccount) // 0x100C
    NETVAR_FIELD(int8_t, m_bHasHelmet) // 0x1010
    NETVAR_FIELD(int32_t, m_iClass) // 0x1014
    NETVAR_FIELD(int32_t, m_ArmorValue) // 0x1018
    NETVAR_FIELD_AS(float, m_angEyeAngles_0_, "m_angEyeAngles[0]") // 0x101C
    NETVAR_FIELD_AS(float, m_angEyeAngles_1_, "m_angEyeAngles[1]") // 0x1020
    NETVAR_FIELD(int8_t, m_bInHostageRescueZone) // 0x1029
    NETVAR_FIELD(Vector, m_vecRagdollVelocity) // 0x1030
    // not generated: m_bHasDefuser, 0x1028: custom proxy 0x241BC400, the width of the variable is not known
    // not generated: m_bNightVisionOn, 0xFBC: custom proxy 0x241BE9D0, the width of the variable is not known
    // not generated: m_flFlashDuration, 0xFD8: custom proxy 0x241BEA10, the width of the variable is not known
    // not generated: m_cycleLatch, 0x10D4: custom proxy 0x241BC470, the width of the variable is not known
};

} // namespace Netvar
