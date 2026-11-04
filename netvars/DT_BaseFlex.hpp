// DT_BaseFlex - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseAnimatingOverlay
// Client classes: CBaseFlex
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_BaseFlex : Base
{
    NETVAR_FRAGMENT(DT_BaseFlex)

    NETVAR_FIELD(Vector, m_viewtarget) // 0x718
    NETVAR_FIELD_ARRAY(float, m_flexWeight, 64) // 0x74C, float[64]
    NETVAR_FIELD(int32_t, m_blinktoggle) // 0x874
};

} // namespace Netvar
