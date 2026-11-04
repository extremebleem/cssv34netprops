// DT_Ragdoll_Attached - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_Ragdoll
// Client classes: CRagdollPropAttached
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_Ragdoll_Attached : Base
{
    NETVAR_FRAGMENT(DT_Ragdoll_Attached)

    NETVAR_FIELD(Vector, m_attachmentPointBoneSpace) // 0x9B8
    NETVAR_FIELD(Vector, m_attachmentPointRagdollSpace) // 0x9D0
    NETVAR_FIELD(int32_t, m_ragdollAttachedObjectIndex) // 0x9DC
    NETVAR_FIELD(int32_t, m_boneIndexAttached) // 0x9E0
};

} // namespace Netvar
