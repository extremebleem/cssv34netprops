// CRagdollProp, the table DT_Ragdoll - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseAnimating
// Server classes: CRagdollProp
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CRagdollProp : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_Ragdoll)

    NETVAR_FIELD(CBaseHandle, m_hUnragdoll) // 0x96C, flags 0x5 SPROP_UNSIGNED|SPROP_NOSCALE
    NETVAR_FIELD(float, m_flBlendWeight) // 0x998, flags 0x8 SPROP_ROUNDDOWN
    NETVAR_FIELD(int32_t, m_nOverlaySequence) // 0x99C
    // not generated: m_ragAngles, 0x0: a send prop of an array says the stride of its elements, not the type of one element, and the receive tables of the game have no such field
    // not generated: m_ragPos, 0x0: a send prop of an array says the stride of its elements, not the type of one element, and the receive tables of the game have no such field
};

} // namespace NetvarServer
