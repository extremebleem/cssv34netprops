// DT_ColorCorrectionVolume - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseEntity
// Client classes: CColorCorrectionVolume
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_ColorCorrectionVolume : Base
{
    NETVAR_FRAGMENT(DT_ColorCorrectionVolume)

    NETVAR_FIELD(float, m_Weight) // 0x460
    NETVAR_FIELD_STRING(m_lookupFilename, 260) // 0x464, char[260]
};

} // namespace Netvar
