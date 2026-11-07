// DT_Animationlayer - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct DT_Animationlayer : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_Animationlayer)

    NETVAR_FIELD(int32_t, m_nSequence) // 0xC, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_flCycle) // 0x10, flags 0x8 SPROP_ROUNDDOWN
    NETVAR_FIELD(float, m_flPrevCycle) // 0x14, flags 0x8 SPROP_ROUNDDOWN
    NETVAR_FIELD(float, m_flWeight) // 0x18
    NETVAR_FIELD(int32_t, m_nOrder) // 0x40, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
