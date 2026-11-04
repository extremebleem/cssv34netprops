// DT_TestTraceline - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Client classes: CTestTraceline
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_TestTraceline : Base
{
    NETVAR_FRAGMENT(DT_TestTraceline)

    NETVAR_FIELD(int32_t, m_clrRender) // 0x58
    NETVAR_FIELD(Vector, m_vecOrigin) // 0x29C
    NETVAR_FIELD_AS(float, m_angRotation_0_, "m_angRotation[0]") // 0x2A8
    NETVAR_FIELD_AS(float, m_angRotation_1_, "m_angRotation[1]") // 0x2AC
    NETVAR_FIELD_AS(float, m_angRotation_2_, "m_angRotation[2]") // 0x2B0
    // not generated: moveparent, 0x154: custom proxy 0x2413A090, the width of the variable is not known
};

} // namespace Netvar
