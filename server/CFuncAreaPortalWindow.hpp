// CFuncAreaPortalWindow, the table DT_FuncAreaPortalWindow - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseEntity
// Server classes: CFuncAreaPortalWindow
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CFuncAreaPortalWindow : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_FuncAreaPortalWindow)

    NETVAR_FIELD(float, m_flFadeStartDist) // 0x35C, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flFadeDist) // 0x360, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flTranslucencyLimit) // 0x364, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(int32_t, m_iBackgroundModelIndex) // 0x36C
};

} // namespace NetvarServer
