// DT_AnimTimeMustBeFirst - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct DT_AnimTimeMustBeFirst : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_AnimTimeMustBeFirst)

    // not generated: m_flAnimTime, 0x28: the receive tables of the game list it: custom proxy 0x24040880, the width of the variable is not known
};

} // namespace NetvarServer
