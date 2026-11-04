// DT_World - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseEntity
// Client classes: CWorld
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_World : Base
{
    NETVAR_FRAGMENT(DT_World)

    NETVAR_FIELD(float, m_flWaveHeight) // 0x460
    NETVAR_FIELD(Vector, m_WorldMins) // 0x464
    NETVAR_FIELD(Vector, m_WorldMaxs) // 0x470
    NETVAR_FIELD(int8_t, m_bStartDark) // 0x47C
    NETVAR_FIELD(float, m_flMaxOccludeeArea) // 0x480
    NETVAR_FIELD(float, m_flMinOccluderArea) // 0x484
    NETVAR_FIELD(float, m_flMinPropScreenSpaceWidth) // 0x488
    NETVAR_FIELD(float, m_flMaxPropScreenSpaceWidth) // 0x48C
    NETVAR_FIELD(int8_t, m_bColdWorld) // 0x490
    NETVAR_FIELD_STRING(m_iszDetailSpriteMaterial, 256) // 0x491, char[256]
};

} // namespace Netvar
