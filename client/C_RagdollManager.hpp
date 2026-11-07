// C_RagdollManager, the table DT_RagdollManager - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Client classes: CRagdollManager
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_RagdollManager : Base
{
    NETVAR_FRAGMENT(DT_RagdollManager)

    NETVAR_FIELD(int32_t, m_iMaxRagdollCount) // 0x460
};

} // namespace Netvar
