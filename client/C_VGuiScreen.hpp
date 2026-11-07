// C_VGuiScreen, the table DT_VGuiScreen - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseEntity
// Client classes: CVGuiScreen
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_VGuiScreen : Base
{
    NETVAR_FRAGMENT(DT_VGuiScreen)

    NETVAR_FIELD(float, m_flWidth) // 0x468
    NETVAR_FIELD(float, m_flHeight) // 0x46C
    NETVAR_FIELD(int32_t, m_nPanelName) // 0x470
    NETVAR_FIELD(int32_t, m_nAttachmentIndex) // 0x48C
    NETVAR_FIELD(int32_t, m_nOverlayMaterial) // 0x490
    NETVAR_FIELD(int32_t, m_fScreenFlags) // 0x494
};

} // namespace Netvar
