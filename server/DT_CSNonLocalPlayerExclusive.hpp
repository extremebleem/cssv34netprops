// DT_CSNonLocalPlayerExclusive - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct DT_CSNonLocalPlayerExclusive : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_CSNonLocalPlayerExclusive)

    NETVAR_FIELD(Vector, m_vecOrigin) // 0x31C, flags 0x402 SPROP_COORD|SPROP_CHANGES_OFTEN
};

} // namespace NetvarServer
