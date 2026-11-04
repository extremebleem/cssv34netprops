// DT_TEBreakModel - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseTempEntity
// Client classes: CTEBreakModel
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_TEBreakModel : Base
{
    NETVAR_FRAGMENT(DT_TEBreakModel)

    NETVAR_FIELD(Vector, m_vecOrigin) // 0x10
    NETVAR_FIELD_AS(float, m_angRotation_0_, "m_angRotation[0]") // 0x1C
    NETVAR_FIELD_AS(float, m_angRotation_1_, "m_angRotation[1]") // 0x20
    NETVAR_FIELD_AS(float, m_angRotation_2_, "m_angRotation[2]") // 0x24
    NETVAR_FIELD(Vector, m_vecSize) // 0x28
    NETVAR_FIELD(Vector, m_vecVelocity) // 0x34
    NETVAR_FIELD(int32_t, m_nRandomization) // 0x40
    NETVAR_FIELD(int32_t, m_nModelIndex) // 0x44
    NETVAR_FIELD(int32_t, m_nCount) // 0x48
    NETVAR_FIELD(float, m_fTime) // 0x4C
    NETVAR_FIELD(int32_t, m_nFlags) // 0x50
};

} // namespace Netvar
