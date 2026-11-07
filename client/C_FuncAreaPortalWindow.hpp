// C_FuncAreaPortalWindow, the table DT_FuncAreaPortalWindow - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseEntity
// Client classes: CFuncAreaPortalWindow
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_FuncAreaPortalWindow : Base
{
    NETVAR_FRAGMENT(DT_FuncAreaPortalWindow)

    NETVAR_FIELD(float, m_flFadeStartDist) // 0x460
    NETVAR_FIELD(float, m_flFadeDist) // 0x464
    NETVAR_FIELD(float, m_flTranslucencyLimit) // 0x468
    NETVAR_FIELD(int32_t, m_iBackgroundModelIndex) // 0x46C
};

} // namespace Netvar
