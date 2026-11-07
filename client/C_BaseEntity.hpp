// C_BaseEntity, the table DT_BaseEntity - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Client classes: CBaseEntity
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_BaseEntity : Base
{
    NETVAR_FRAGMENT(DT_BaseEntity)

    NETVAR_TABLE(DT_AnimTimeMustBeFirst, AnimTimeMustBeFirst) // 0x0
    NETVAR_TABLE(DT_PredictableId, predictable_id) // 0x0
    NETVAR_FIELD(int8_t, m_nRenderFX) // 0x54
    NETVAR_FIELD(int32_t, m_clrRender) // 0x58
    NETVAR_FIELD(int8_t, m_nRenderMode) // 0x74
    NETVAR_FIELD(int16_t, m_nModelIndex) // 0x84
    NETVAR_FIELD(int32_t, m_iTeamNum) // 0x90
    NETVAR_FIELD(int8_t, m_iParentAttachment) // 0x13C
    NETVAR_TABLE(DT_CollisionProperty, m_Collision) // 0x160
    NETVAR_FIELD(float, m_flElasticity) // 0x1BC
    NETVAR_FIELD(float, m_flShadowCastDistance) // 0x1C0
    NETVAR_FIELD(Vector, m_vecOrigin) // 0x29C
    NETVAR_FIELD(Vector, m_angRotation) // 0x2A8
    NETVAR_FIELD(int32_t, m_CollisionGroup) // 0x2B8
    NETVAR_FIELD(int8_t, m_bAlternateSorting) // 0x42B
    NETVAR_FIELD(int8_t, m_iTextureFrameIndex) // 0x42C
    NETVAR_FIELD(CBaseHandle, m_hOwnerEntity) // 0x438
    NETVAR_FIELD(CBaseHandle, m_hEffectEntity) // 0x43C
    // not generated: m_flSimulationTime, 0x68: custom proxy 0x24040910, the width of the variable is not known
    // not generated: m_fEffects, 0x70: custom proxy 0x240409D0, the width of the variable is not known
    // not generated: moveparent, 0x154: custom proxy 0x2413A090, the width of the variable is not known
    // not generated: movetype, 0x0: custom proxy 0x24044940, the width of the variable is not known
    // not generated: movecollide, 0x0: custom proxy 0x24042E20, the width of the variable is not known
    // not generated: m_bSimulatedEveryTick, 0x429: custom proxy 0x2413A0D0, the width of the variable is not known
    // not generated: m_bAnimatedEveryTick, 0x42A: custom proxy 0x2413A0D0, the width of the variable is not known
};

} // namespace Netvar
