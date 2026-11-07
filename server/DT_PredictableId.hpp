// DT_PredictableId - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct DT_PredictableId : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_PredictableId)

    NETVAR_FIELD(int8_t, m_bIsPlayerSimulated) // 0x344, flags 0x1 SPROP_UNSIGNED
    // not generated: m_PredictableID, 0x34: the receive tables of the game list it: custom proxy 0x2413A000, the width of the variable is not known
};

} // namespace NetvarServer
