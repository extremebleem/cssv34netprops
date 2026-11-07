// C_ColorCorrection, the table DT_ColorCorrection - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseEntity
// Client classes: CColorCorrection
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_ColorCorrection : Base
{
    NETVAR_FRAGMENT(DT_ColorCorrection)

    NETVAR_FIELD(Vector, m_vecOrigin) // 0x460
    NETVAR_FIELD(float, m_minFalloff) // 0x46C
    NETVAR_FIELD(float, m_maxFalloff) // 0x470
    NETVAR_FIELD(float, m_maxWeight) // 0x474
    NETVAR_FIELD_STRING(m_netLookupFilename, 260) // 0x478, char[260]
    NETVAR_FIELD(int8_t, m_bEnabled) // 0x57C
};

} // namespace Netvar
