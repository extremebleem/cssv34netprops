// DT_LocalPlayerExclusive - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_LocalPlayerExclusive : Base
{
    NETVAR_FRAGMENT(DT_LocalPlayerExclusive)

    NETVAR_FIELD(int32_t, m_nNextThinkTick) // 0x7C
    NETVAR_FIELD_AS(float, m_vecViewOffset_0_, "m_vecViewOffset[0]") // 0xD4
    NETVAR_FIELD_AS(float, m_vecViewOffset_1_, "m_vecViewOffset[1]") // 0xD8
    NETVAR_FIELD_AS(float, m_vecViewOffset_2_, "m_vecViewOffset[2]") // 0xDC
    NETVAR_FIELD(Vector, m_vecBaseVelocity) // 0x114
    NETVAR_FIELD(int8_t, m_nWaterLevel) // 0x13E
    NETVAR_FIELD(CBaseHandle, m_hGroundEntity) // 0x1C8
    NETVAR_FIELD(float, m_flFriction) // 0x1D0
    NETVAR_FIELD_ARRAY(int32_t, m_iAmmo, 32) // 0x9F8, int32_t[32]
    NETVAR_TABLE(DT_Local, m_Local) // 0xB44
    NETVAR_FIELD(int8_t, m_fOnTarget) // 0xD2C
    NETVAR_FIELD(CBaseHandle, m_hConstraintEntity) // 0xD64
    NETVAR_FIELD(Vector, m_vecConstraintCenter) // 0xD68
    NETVAR_FIELD(float, m_flConstraintRadius) // 0xD74
    NETVAR_FIELD(float, m_flConstraintWidth) // 0xD78
    NETVAR_FIELD(float, m_flConstraintSpeedFactor) // 0xD7C
    NETVAR_FIELD(float, m_flDeathTime) // 0xD8C
    NETVAR_FIELD(int32_t, m_nTickBase) // 0xE08
    NETVAR_FIELD(CBaseHandle, m_hLastWeapon) // 0xE18
    NETVAR_FIELD(float, m_flLaggedMovementValue) // 0xF30
    // not generated: m_vecVelocity[0], 0xE0: custom proxy 0x240523F0, the width of the variable is not known
    // not generated: m_vecVelocity[1], 0xE4: custom proxy 0x24052440, the width of the variable is not known
    // not generated: m_vecVelocity[2], 0xE8: custom proxy 0x24052490, the width of the variable is not known
};

} // namespace Netvar
