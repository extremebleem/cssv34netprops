// DT_ShadowControl - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseEntity
// Client classes: CShadowControl
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_ShadowControl : Base
{
    NETVAR_FRAGMENT(DT_ShadowControl)

    NETVAR_FIELD(Vector, m_shadowDirection) // 0x460
    NETVAR_FIELD(int32_t, m_shadowColor) // 0x46C
    NETVAR_FIELD(float, m_flShadowMaxDist) // 0x470
    NETVAR_FIELD(int8_t, m_bDisableShadows) // 0x474
};

} // namespace Netvar
