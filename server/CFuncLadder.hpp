// CFuncLadder, the table DT_FuncLadder - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseEntity
// Server classes: CFuncLadder
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CFuncLadder : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_FuncLadder)

    NETVAR_FIELD(Vector, m_vecLadderDir) // 0x350, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(Vector, m_vecPlayerMountPositionTop) // 0x370, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(Vector, m_vecPlayerMountPositionBottom) // 0x37C, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(int8_t, m_bFakeLadder) // 0x389, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
