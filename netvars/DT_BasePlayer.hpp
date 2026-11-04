// DT_BasePlayer - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseCombatCharacter
// Client classes: CBasePlayer
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_BasePlayer : Base
{
    NETVAR_FRAGMENT(DT_BasePlayer)

    NETVAR_TABLE(DT_LocalPlayerExclusive, localdata) // 0x0
    NETVAR_FIELD(int8_t, m_lifeState) // 0x87
    NETVAR_FIELD(int32_t, m_fFlags) // 0x2B4
    NETVAR_TABLE(DT_PlayerState, pl) // 0xD08
    NETVAR_FIELD(int32_t, m_iObserverMode) // 0xD80
    NETVAR_FIELD(CBaseHandle, m_hVehicle) // 0xD94
    NETVAR_FIELD(CBaseHandle, m_hUseEntity) // 0xD9C
    NETVAR_FIELD(float, m_flMaxspeed) // 0xDA0
    NETVAR_FIELD(int32_t, m_iHealth) // 0xDA4
    NETVAR_FIELD_STRING(m_szLastPlaceName, 18) // 0xF44, char[18]
    // not generated: m_iFOV, 0xD1C: custom proxy 0x240518B0, the width of the variable is not known
    // not generated: m_iDefaultFOV, 0xD28: custom proxy 0x24051910, the width of the variable is not known
    // not generated: m_hObserverTarget, 0xD84: custom proxy 0x240524E0, the width of the variable is not known
    // not generated: m_hViewModel, 0x0: offset 0 of an entity is its vtable: a value that only its proxy stores
};

} // namespace Netvar
