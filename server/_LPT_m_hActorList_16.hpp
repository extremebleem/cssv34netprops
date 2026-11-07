// _LPT_m_hActorList_16 - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct _LPT_m_hActorList_16 : Base
{
    NETVAR_FRAGMENT_AS("server:", _LPT_m_hActorList_16)

    // not generated: lengthprop16, 0x0: a send prop of an int says how many bits go on the wire (5), not how many bytes the variable has, and the receive tables of the game have no such field
};

} // namespace NetvarServer
