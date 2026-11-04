// DT_TEMuzzleFlash - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseTempEntity
// Client classes: CTEMuzzleFlash
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_TEMuzzleFlash : Base
{
    NETVAR_FRAGMENT(DT_TEMuzzleFlash)

    NETVAR_FIELD(Vector, m_vecOrigin) // 0x10
    NETVAR_FIELD(Vector, m_vecAngles) // 0x1C
    NETVAR_FIELD(float, m_flScale) // 0x28
    NETVAR_FIELD(int32_t, m_nType) // 0x2C
};

} // namespace Netvar
