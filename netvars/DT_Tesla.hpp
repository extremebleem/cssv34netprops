// DT_Tesla - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseEntity
// Client classes: CTesla
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_Tesla : Base
{
    NETVAR_FRAGMENT(DT_Tesla)

    NETVAR_FIELD_STRING(m_SoundName, 64) // 0x484, char[64]
    NETVAR_FIELD_STRING(m_iszSpriteName, 256) // 0x4C4, char[256]
};

} // namespace Netvar
