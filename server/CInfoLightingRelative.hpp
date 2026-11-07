// CInfoLightingRelative, the table DT_InfoLightingRelative - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseEntity
// Server classes: CInfoLightingRelative
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CInfoLightingRelative : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_InfoLightingRelative)

    NETVAR_FIELD(CBaseHandle, m_hLightingLandmark) // 0x350, flags 0x5 SPROP_UNSIGNED|SPROP_NOSCALE
};

} // namespace NetvarServer
