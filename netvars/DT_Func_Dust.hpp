// DT_Func_Dust - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Client classes: CFunc_Dust
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_Func_Dust : Base
{
    NETVAR_FRAGMENT(DT_Func_Dust)

    NETVAR_FIELD(int16_t, m_nModelIndex) // 0x84
    NETVAR_TABLE(DT_CollisionProperty, m_Collision) // 0x160
    NETVAR_FIELD(int32_t, m_Color) // 0x460
    NETVAR_FIELD(int32_t, m_SpawnRate) // 0x464
    NETVAR_FIELD(float, m_flSizeMin) // 0x468
    NETVAR_FIELD(float, m_flSizeMax) // 0x46C
    NETVAR_FIELD(int32_t, m_SpeedMax) // 0x470
    NETVAR_FIELD(int32_t, m_LifetimeMin) // 0x474
    NETVAR_FIELD(int32_t, m_LifetimeMax) // 0x478
    NETVAR_FIELD(int32_t, m_DistMax) // 0x47C
    NETVAR_FIELD(float, m_FallSpeed) // 0x480
    NETVAR_FIELD(int32_t, m_DustFlags) // 0x484
};

} // namespace Netvar
