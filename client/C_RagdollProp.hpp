// C_RagdollProp, the table DT_Ragdoll - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseAnimating
// Client classes: CRagdollProp
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_RagdollProp : Base
{
    NETVAR_FRAGMENT(DT_Ragdoll)

    NETVAR_FIELD(CBaseHandle, m_hUnragdoll) // 0x9A4
    NETVAR_FIELD(float, m_flBlendWeight) // 0x9A8
    NETVAR_FIELD(int32_t, m_nOverlaySequence) // 0x9B0
    // not generated: m_ragAngles, 0x0: offset 0 of an entity is its vtable: a value that only its proxy stores
    // not generated: m_ragPos, 0x0: offset 0 of an entity is its vtable: a value that only its proxy stores
};

} // namespace Netvar
