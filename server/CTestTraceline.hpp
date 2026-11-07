// CTestTraceline, the table DT_TestTraceline - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Server classes: CTestTraceline
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CTestTraceline : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_TestTraceline)

    NETVAR_FIELD(int32_t, m_clrRender) // 0x20, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(Vector, m_vecOrigin) // 0x31C
    NETVAR_FIELD_AS(float, m_angRotation_0_, "m_angRotation[0]") // 0x328, flags 0x800 SPROP_IS_A_VECTOR_ELEM
    NETVAR_FIELD_AS(float, m_angRotation_1_, "m_angRotation[1]") // 0x32C, flags 0x800 SPROP_IS_A_VECTOR_ELEM
    NETVAR_FIELD_AS(float, m_angRotation_2_, "m_angRotation[2]") // 0x330, flags 0x800 SPROP_IS_A_VECTOR_ELEM
    // not generated: moveparent, 0xE0: the receive tables of the game list it: custom proxy 0x2413A090, the width of the variable is not known
};

} // namespace NetvarServer
