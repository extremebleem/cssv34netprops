// C_TEKillPlayerAttachments, the table DT_TEKillPlayerAttachments - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseTempEntity
// Client classes: CTEKillPlayerAttachments
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_TEKillPlayerAttachments : Base
{
    NETVAR_FRAGMENT(DT_TEKillPlayerAttachments)

    NETVAR_FIELD(int32_t, m_nPlayer) // 0x10
};

} // namespace Netvar
