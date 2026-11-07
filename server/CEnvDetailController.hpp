// CEnvDetailController, the table DT_DetailController - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Server classes: CEnvDetailController
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CEnvDetailController : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_DetailController)

    NETVAR_FIELD(float, m_flFadeStartDist) // 0x350, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flFadeEndDist) // 0x354, flags 0x4 SPROP_NOSCALE
};

} // namespace NetvarServer
