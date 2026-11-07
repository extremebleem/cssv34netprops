// C_BoneFollower, the table DT_BoneFollower - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseEntity
// Client classes: CBoneFollower
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_BoneFollower : Base
{
    NETVAR_FRAGMENT(DT_BoneFollower)

    NETVAR_FIELD(int32_t, m_modelIndex) // 0x460
    NETVAR_FIELD(int32_t, m_solidIndex) // 0x464
};

} // namespace Netvar
