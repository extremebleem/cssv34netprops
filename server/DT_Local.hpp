// DT_Local - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct DT_Local : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_Local)

    NETVAR_FIELD_ARRAY(int8_t, m_chAreaBits, 32) // 0x4, flags 0x200 SPROP_PROXY_ALWAYS_YES, int8_t[32]
    NETVAR_FIELD_ARRAY(int8_t, m_chAreaPortalBits, 24) // 0x24, flags 0x200 SPROP_PROXY_ALWAYS_YES, int8_t[24]
    NETVAR_FIELD(int32_t, m_iHideHUD) // 0x3C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_flFOVRate) // 0x40, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(int8_t, m_bDucked) // 0x50, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_bDucking) // 0x51, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_bInDuckJump) // 0x52, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_flDucktime) // 0x54, flags 0x408 SPROP_ROUNDDOWN|SPROP_CHANGES_OFTEN
    NETVAR_FIELD(float, m_flDuckJumpTime) // 0x58, flags 0x8 SPROP_ROUNDDOWN
    NETVAR_FIELD(float, m_flJumpTime) // 0x5C, flags 0x8 SPROP_ROUNDDOWN
    NETVAR_FIELD(float, m_flFallVelocity) // 0x64, flags 0x400 SPROP_CHANGES_OFTEN
    NETVAR_FIELD(Vector, m_vecPunchAngle) // 0x70, flags 0x402 SPROP_COORD|SPROP_CHANGES_OFTEN
    NETVAR_FIELD(Vector, m_vecPunchAngleVel) // 0x7C, flags 0x2 SPROP_COORD
    NETVAR_FIELD(int8_t, m_bDrawViewmodel) // 0x88, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_bWearingSuit) // 0x89, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_bPoisoned) // 0x8A, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_flStepSize) // 0x8C, flags 0x10 SPROP_ROUNDUP
    NETVAR_FIELD(int8_t, m_bAllowAutoMovement) // 0x90, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD_AS(int32_t, m_skybox3d_scale, "m_skybox3d.scale") // 0x98
    NETVAR_FIELD_AS(Vector, m_skybox3d_origin, "m_skybox3d.origin") // 0x9C, flags 0x2 SPROP_COORD
    NETVAR_FIELD_AS(int32_t, m_skybox3d_area, "m_skybox3d.area") // 0xA8, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD_AS(int8_t, m_skybox3d_fog_enable, "m_skybox3d.fog.enable") // 0xB0, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD_AS(int8_t, m_skybox3d_fog_blend, "m_skybox3d.fog.blend") // 0xB1, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD_AS(Vector, m_skybox3d_fog_dirPrimary, "m_skybox3d.fog.dirPrimary") // 0xB4, flags 0x2 SPROP_COORD
    NETVAR_FIELD_AS(int32_t, m_skybox3d_fog_colorPrimary, "m_skybox3d.fog.colorPrimary") // 0xC0, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD_AS(int32_t, m_skybox3d_fog_colorSecondary, "m_skybox3d.fog.colorSecondary") // 0xC4, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD_AS(float, m_skybox3d_fog_start, "m_skybox3d.fog.start") // 0xC8, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD_AS(float, m_skybox3d_fog_end, "m_skybox3d.fog.end") // 0xCC, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD_AS(int8_t, m_fog_enable, "m_fog.enable") // 0xF0, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD_AS(int8_t, m_fog_blend, "m_fog.blend") // 0xF1, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD_AS(Vector, m_fog_dirPrimary, "m_fog.dirPrimary") // 0xF4, flags 0x2 SPROP_COORD
    NETVAR_FIELD_AS(int32_t, m_fog_colorPrimary, "m_fog.colorPrimary") // 0x100, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD_AS(int32_t, m_fog_colorSecondary, "m_fog.colorSecondary") // 0x104, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD_AS(float, m_fog_start, "m_fog.start") // 0x108, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD_AS(float, m_fog_end, "m_fog.end") // 0x10C, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD_AS(float, m_fog_farz, "m_fog.farz") // 0x110, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD_AS(int32_t, m_fog_colorPrimaryLerpTo, "m_fog.colorPrimaryLerpTo") // 0x114, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD_AS(int32_t, m_fog_colorSecondaryLerpTo, "m_fog.colorSecondaryLerpTo") // 0x118, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD_AS(float, m_fog_startLerpTo, "m_fog.startLerpTo") // 0x11C, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD_AS(float, m_fog_endLerpTo, "m_fog.endLerpTo") // 0x120, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD_AS(float, m_fog_lerptime, "m_fog.lerptime") // 0x124, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD_AS(float, m_fog_duration, "m_fog.duration") // 0x128, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD_AS(Vector, m_audio_localSound_0_, "m_audio.localSound[0]") // 0x130, flags 0x2 SPROP_COORD
    NETVAR_FIELD_AS(Vector, m_audio_localSound_1_, "m_audio.localSound[1]") // 0x13C, flags 0x2 SPROP_COORD
    NETVAR_FIELD_AS(Vector, m_audio_localSound_2_, "m_audio.localSound[2]") // 0x148, flags 0x2 SPROP_COORD
    NETVAR_FIELD_AS(Vector, m_audio_localSound_3_, "m_audio.localSound[3]") // 0x154, flags 0x2 SPROP_COORD
    NETVAR_FIELD_AS(Vector, m_audio_localSound_4_, "m_audio.localSound[4]") // 0x160, flags 0x2 SPROP_COORD
    NETVAR_FIELD_AS(Vector, m_audio_localSound_5_, "m_audio.localSound[5]") // 0x16C, flags 0x2 SPROP_COORD
    NETVAR_FIELD_AS(Vector, m_audio_localSound_6_, "m_audio.localSound[6]") // 0x178, flags 0x2 SPROP_COORD
    NETVAR_FIELD_AS(Vector, m_audio_localSound_7_, "m_audio.localSound[7]") // 0x184, flags 0x2 SPROP_COORD
    NETVAR_FIELD_AS(int32_t, m_audio_soundscapeIndex, "m_audio.soundscapeIndex") // 0x190
    NETVAR_FIELD_AS(int32_t, m_audio_localBits, "m_audio.localBits") // 0x194, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD_AS(CBaseHandle, m_audio_ent, "m_audio.ent") // 0x198, flags 0x5 SPROP_UNSIGNED|SPROP_NOSCALE
};

} // namespace NetvarServer
