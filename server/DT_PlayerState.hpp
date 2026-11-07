// DT_PlayerState - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct DT_PlayerState : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_PlayerState)

    NETVAR_FIELD(int8_t, deadflag) // 0x4, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
