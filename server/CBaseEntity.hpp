// CBaseEntity, the table DT_BaseEntity - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Server classes: CBaseEntity
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CBaseEntity : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_BaseEntity)

    NETVAR_TABLE_NS(NetvarServer, DT_AnimTimeMustBeFirst, AnimTimeMustBeFirst) // 0x0
    NETVAR_TABLE_NS(NetvarServer, DT_PredictableId, predictable_id) // 0x0
    NETVAR_FIELD(int8_t, m_nRenderFX) // 0x1C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_nRenderMode) // 0x1D, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int16_t, m_nModelIndex) // 0x1E
    NETVAR_FIELD(int32_t, m_clrRender) // 0x20, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_iParentAttachment) // 0xDD, flags 0x1 SPROP_UNSIGNED
    NETVAR_TABLE_NS(NetvarServer, DT_CollisionProperty, m_Collision) // 0xEC, flags 0x200 SPROP_PROXY_ALWAYS_YES
    NETVAR_FIELD(CBaseHandle, m_hOwnerEntity) // 0x1EC, flags 0x5 SPROP_UNSIGNED|SPROP_NOSCALE
    NETVAR_FIELD(CBaseHandle, m_hEffectEntity) // 0x1F0, flags 0x5 SPROP_UNSIGNED|SPROP_NOSCALE
    NETVAR_FIELD(int32_t, m_CollisionGroup) // 0x1F4, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_flShadowCastDistance) // 0x1FC, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_iTeamNum) // 0x208
    NETVAR_FIELD(float, m_flElasticity) // 0x280, flags 0x2 SPROP_COORD
    NETVAR_FIELD(int8_t, m_iTextureFrameIndex) // 0x2AC, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_bAlternateSorting) // 0x2AF, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(Vector, m_vecOrigin) // 0x31C, flags 0x402 SPROP_COORD|SPROP_CHANGES_OFTEN
    NETVAR_FIELD(Vector, m_angRotation) // 0x328, flags 0x400 SPROP_CHANGES_OFTEN
    // not generated: m_flSimulationTime, 0x2C: the receive tables of the game list it: custom proxy 0x24040910, the width of the variable is not known
    // not generated: m_fEffects, 0x6C: the receive tables of the game list it: custom proxy 0x240409D0, the width of the variable is not known
    // not generated: moveparent, 0xE0: the receive tables of the game list it: custom proxy 0x2413A090, the width of the variable is not known
    // not generated: movetype, 0xDE: the receive tables of the game list it: custom proxy 0x24044940, the width of the variable is not known
    // not generated: movecollide, 0xDF: the receive tables of the game list it: custom proxy 0x24042E20, the width of the variable is not known
    // not generated: m_bSimulatedEveryTick, 0x2AD: the receive tables of the game list it: custom proxy 0x2413A0D0, the width of the variable is not known
    // not generated: m_bAnimatedEveryTick, 0x2AE: the receive tables of the game list it: custom proxy 0x2413A0D0, the width of the variable is not known
};

} // namespace NetvarServer
