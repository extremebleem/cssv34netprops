// CRagdollPropAttached, the table DT_Ragdoll_Attached - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CRagdollProp
// Server classes: CRagdollPropAttached
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CRagdollPropAttached : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_Ragdoll_Attached)

    NETVAR_FIELD(int32_t, m_boneIndexAttached) // 0xBE4, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_ragdollAttachedObjectIndex) // 0xBE8, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(Vector, m_attachmentPointBoneSpace) // 0xBEC, flags 0x2 SPROP_COORD
    NETVAR_FIELD(Vector, m_attachmentPointRagdollSpace) // 0xBF8, flags 0x2 SPROP_COORD
};

} // namespace NetvarServer
