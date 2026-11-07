// DT_Local - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_Local : Base
{
    NETVAR_FRAGMENT(DT_Local)

    NETVAR_FIELD_ARRAY(int8_t, m_chAreaBits, 32) // 0x4, int8_t[32]
    NETVAR_FIELD_ARRAY(int8_t, m_chAreaPortalBits, 24) // 0x24, int8_t[24]
    NETVAR_FIELD(int32_t, m_iHideHUD) // 0x3C
    NETVAR_FIELD(float, m_flFOVRate) // 0x40
    NETVAR_FIELD(int8_t, m_bDucked) // 0x44
    NETVAR_FIELD(int8_t, m_bDucking) // 0x45
    NETVAR_FIELD(int8_t, m_bInDuckJump) // 0x46
    NETVAR_FIELD(float, m_flDucktime) // 0x48
    NETVAR_FIELD(float, m_flDuckJumpTime) // 0x4C
    NETVAR_FIELD(float, m_flJumpTime) // 0x50
    NETVAR_FIELD(float, m_flFallVelocity) // 0x58
    NETVAR_FIELD(Vector, m_vecPunchAngle) // 0x6C
    NETVAR_FIELD(Vector, m_vecPunchAngleVel) // 0xA0
    NETVAR_FIELD(int8_t, m_bDrawViewmodel) // 0xAC
    NETVAR_FIELD(int8_t, m_bWearingSuit) // 0xAD
    NETVAR_FIELD(int8_t, m_bPoisoned) // 0xAE
    NETVAR_FIELD(float, m_flStepSize) // 0xB0
    NETVAR_FIELD(int8_t, m_bAllowAutoMovement) // 0xB4
    NETVAR_FIELD_AS(int32_t, m_skybox3d_scale, "m_skybox3d.scale") // 0xBC
    NETVAR_FIELD_AS(Vector, m_skybox3d_origin, "m_skybox3d.origin") // 0xC0
    NETVAR_FIELD_AS(int32_t, m_skybox3d_area, "m_skybox3d.area") // 0xCC
    NETVAR_FIELD_AS(int8_t, m_skybox3d_fog_enable, "m_skybox3d.fog.enable") // 0xD4
    NETVAR_FIELD_AS(int8_t, m_skybox3d_fog_blend, "m_skybox3d.fog.blend") // 0xD5
    NETVAR_FIELD_AS(Vector, m_skybox3d_fog_dirPrimary, "m_skybox3d.fog.dirPrimary") // 0xD8
    NETVAR_FIELD_AS(int32_t, m_skybox3d_fog_colorPrimary, "m_skybox3d.fog.colorPrimary") // 0xE4
    NETVAR_FIELD_AS(int32_t, m_skybox3d_fog_colorSecondary, "m_skybox3d.fog.colorSecondary") // 0xE8
    NETVAR_FIELD_AS(float, m_skybox3d_fog_start, "m_skybox3d.fog.start") // 0xEC
    NETVAR_FIELD_AS(float, m_skybox3d_fog_end, "m_skybox3d.fog.end") // 0xF0
    NETVAR_FIELD_AS(int8_t, m_fog_enable, "m_fog.enable") // 0x114
    NETVAR_FIELD_AS(int8_t, m_fog_blend, "m_fog.blend") // 0x115
    NETVAR_FIELD_AS(Vector, m_fog_dirPrimary, "m_fog.dirPrimary") // 0x118
    NETVAR_FIELD_AS(int32_t, m_fog_colorPrimary, "m_fog.colorPrimary") // 0x124
    NETVAR_FIELD_AS(int32_t, m_fog_colorSecondary, "m_fog.colorSecondary") // 0x128
    NETVAR_FIELD_AS(float, m_fog_start, "m_fog.start") // 0x12C
    NETVAR_FIELD_AS(float, m_fog_end, "m_fog.end") // 0x130
    NETVAR_FIELD_AS(float, m_fog_farz, "m_fog.farz") // 0x134
    NETVAR_FIELD_AS(int32_t, m_fog_colorPrimaryLerpTo, "m_fog.colorPrimaryLerpTo") // 0x138
    NETVAR_FIELD_AS(int32_t, m_fog_colorSecondaryLerpTo, "m_fog.colorSecondaryLerpTo") // 0x13C
    NETVAR_FIELD_AS(float, m_fog_startLerpTo, "m_fog.startLerpTo") // 0x140
    NETVAR_FIELD_AS(float, m_fog_endLerpTo, "m_fog.endLerpTo") // 0x144
    NETVAR_FIELD_AS(float, m_fog_lerptime, "m_fog.lerptime") // 0x148
    NETVAR_FIELD_AS(float, m_fog_duration, "m_fog.duration") // 0x14C
    NETVAR_FIELD_AS(Vector, m_audio_localSound_0_, "m_audio.localSound[0]") // 0x154
    NETVAR_FIELD_AS(Vector, m_audio_localSound_1_, "m_audio.localSound[1]") // 0x160
    NETVAR_FIELD_AS(Vector, m_audio_localSound_2_, "m_audio.localSound[2]") // 0x16C
    NETVAR_FIELD_AS(Vector, m_audio_localSound_3_, "m_audio.localSound[3]") // 0x178
    NETVAR_FIELD_AS(Vector, m_audio_localSound_4_, "m_audio.localSound[4]") // 0x184
    NETVAR_FIELD_AS(Vector, m_audio_localSound_5_, "m_audio.localSound[5]") // 0x190
    NETVAR_FIELD_AS(Vector, m_audio_localSound_6_, "m_audio.localSound[6]") // 0x19C
    NETVAR_FIELD_AS(Vector, m_audio_localSound_7_, "m_audio.localSound[7]") // 0x1A8
    NETVAR_FIELD_AS(int32_t, m_audio_soundscapeIndex, "m_audio.soundscapeIndex") // 0x1B4
    NETVAR_FIELD_AS(int32_t, m_audio_localBits, "m_audio.localBits") // 0x1B8
    NETVAR_FIELD_AS(CBaseHandle, m_audio_ent, "m_audio.ent") // 0x1BC
};

} // namespace Netvar
