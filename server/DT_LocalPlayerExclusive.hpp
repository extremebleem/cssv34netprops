// DT_LocalPlayerExclusive - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct DT_LocalPlayerExclusive : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_LocalPlayerExclusive)

    NETVAR_FIELD(int32_t, m_nNextThinkTick) // 0x68
    NETVAR_FIELD(int8_t, m_nWaterLevel) // 0x20F, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(CBaseHandle, m_hGroundEntity) // 0x214, flags 0x5 SPROP_UNSIGNED|SPROP_NOSCALE
    NETVAR_FIELD(Vector, m_vecBaseVelocity) // 0x220
    NETVAR_FIELD(float, m_flFriction) // 0x27C, flags 0x8 SPROP_ROUNDDOWN
    NETVAR_FIELD_AS(float, m_vecViewOffset_0_, "m_vecViewOffset[0]") // 0x338, flags 0x808 SPROP_ROUNDDOWN|SPROP_IS_A_VECTOR_ELEM
    NETVAR_FIELD_AS(float, m_vecViewOffset_1_, "m_vecViewOffset[1]") // 0x33C, flags 0x808 SPROP_ROUNDDOWN|SPROP_IS_A_VECTOR_ELEM
    NETVAR_FIELD_AS(float, m_vecViewOffset_2_, "m_vecViewOffset[2]") // 0x340, flags 0xC00 SPROP_CHANGES_OFTEN|SPROP_IS_A_VECTOR_ELEM
    NETVAR_FIELD_ARRAY(int32_t, m_iAmmo, 32) // 0x628, flags 0x200 SPROP_PROXY_ALWAYS_YES, int32_t[32]
    NETVAR_TABLE_NS(NetvarServer, DT_Local, m_Local) // 0x770, flags 0x200 SPROP_PROXY_ALWAYS_YES
    NETVAR_FIELD(int8_t, m_fOnTarget) // 0x968, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_flDeathTime) // 0x9EC, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(int32_t, m_nTickBase) // 0xCAC, flags 0x400 SPROP_CHANGES_OFTEN
    NETVAR_FIELD(CBaseHandle, m_hLastWeapon) // 0xCB8, flags 0x5 SPROP_UNSIGNED|SPROP_NOSCALE
    NETVAR_FIELD(CBaseHandle, m_hConstraintEntity) // 0xCE0, flags 0x5 SPROP_UNSIGNED|SPROP_NOSCALE
    NETVAR_FIELD(Vector, m_vecConstraintCenter) // 0xCE4, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flConstraintRadius) // 0xCF0, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flConstraintWidth) // 0xCF4, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flConstraintSpeedFactor) // 0xCF8, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flLaggedMovementValue) // 0xD1C, flags 0x4 SPROP_NOSCALE
    // not generated: m_vecVelocity[0], 0x2A0: the receive tables of the game list it: custom proxy 0x240523F0, the width of the variable is not known
    // not generated: m_vecVelocity[1], 0x2A4: the receive tables of the game list it: custom proxy 0x24052440, the width of the variable is not known
    // not generated: m_vecVelocity[2], 0x2A8: the receive tables of the game list it: custom proxy 0x24052490, the width of the variable is not known
};

} // namespace NetvarServer
