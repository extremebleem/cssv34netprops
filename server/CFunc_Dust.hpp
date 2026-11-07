// CFunc_Dust, the table DT_Func_Dust - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Server classes: CFunc_Dust
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CFunc_Dust : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_Func_Dust)

    NETVAR_FIELD(int16_t, m_nModelIndex) // 0x1E
    NETVAR_TABLE_NS(NetvarServer, DT_CollisionProperty, m_Collision) // 0xEC, flags 0x200 SPROP_PROXY_ALWAYS_YES
    NETVAR_FIELD(int32_t, m_Color) // 0x350, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_SpawnRate) // 0x354, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_flSizeMin) // 0x358, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flSizeMax) // 0x35C, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(int32_t, m_SpeedMax) // 0x360, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_LifetimeMin) // 0x364, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_LifetimeMax) // 0x368, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_DistMax) // 0x36C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_FallSpeed) // 0x370, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(int32_t, m_DustFlags) // 0x374, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
