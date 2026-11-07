// CVGuiScreen, the table DT_VGuiScreen - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseEntity
// Server classes: CVGuiScreen
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CVGuiScreen : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_VGuiScreen)

    NETVAR_FIELD(float, m_flWidth) // 0x354, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flHeight) // 0x358, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(int32_t, m_nPanelName) // 0x35C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nAttachmentIndex) // 0x360, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nOverlayMaterial) // 0x364, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_fScreenFlags) // 0x368, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
