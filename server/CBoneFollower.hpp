// CBoneFollower, the table DT_BoneFollower - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseEntity
// Server classes: CBoneFollower
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CBoneFollower : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_BoneFollower)

    NETVAR_FIELD(int32_t, m_modelIndex) // 0x350
    NETVAR_FIELD(int32_t, m_solidIndex) // 0x354, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
