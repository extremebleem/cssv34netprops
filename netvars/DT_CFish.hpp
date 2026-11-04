// DT_CFish - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Client classes: CFish
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_CFish : Base
{
    NETVAR_FRAGMENT(DT_CFish)

    NETVAR_FIELD(int16_t, m_nModelIndex) // 0x84
    NETVAR_FIELD(int8_t, m_lifeState) // 0x87
    NETVAR_FIELD(float, m_z) // 0x6FC
    NETVAR_FIELD(float, m_angle) // 0x704
    NETVAR_FIELD(Vector, m_poolOrigin) // 0x70C
    NETVAR_FIELD(float, m_waterLevel) // 0x718
    // not generated: m_x, 0x6F4: custom proxy 0x2405E6A0, the width of the variable is not known
    // not generated: m_y, 0x6F8: custom proxy 0x2405E6C0, the width of the variable is not known
};

} // namespace Netvar
