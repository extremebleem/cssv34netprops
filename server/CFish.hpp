// CFish, the table DT_CFish - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Server classes: CFish
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CFish : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_CFish)

    NETVAR_FIELD(int16_t, m_nModelIndex) // 0x1E
    NETVAR_FIELD(int8_t, m_lifeState) // 0x8C
    NETVAR_FIELD(float, m_z) // 0x478, flags 0x2 SPROP_COORD
    NETVAR_FIELD(float, m_angle) // 0x47C
    NETVAR_FIELD(Vector, m_poolOrigin) // 0x49C, flags 0x2 SPROP_COORD
    NETVAR_FIELD(float, m_waterLevel) // 0x4A8, flags 0x4 SPROP_NOSCALE
    // not generated: m_x, 0x470: the receive tables of the game list it: custom proxy 0x2405E6A0, the width of the variable is not known
    // not generated: m_y, 0x474: the receive tables of the game list it: custom proxy 0x2405E6C0, the width of the variable is not known
};

} // namespace NetvarServer
