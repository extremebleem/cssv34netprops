// C_MaterialModifyControl, the table DT_MaterialModifyControl - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseEntity
// Client classes: CMaterialModifyControl
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_MaterialModifyControl : Base
{
    NETVAR_FRAGMENT(DT_MaterialModifyControl)

    NETVAR_FIELD_STRING(m_szMaterialName, 255) // 0x460, char[255]
    NETVAR_FIELD_STRING(m_szMaterialVar, 255) // 0x55F, char[255]
    NETVAR_FIELD_STRING(m_szMaterialVarValue, 255) // 0x65E, char[255]
    NETVAR_FIELD(int32_t, m_iFrameStart) // 0x768
    NETVAR_FIELD(int32_t, m_iFrameEnd) // 0x76C
    NETVAR_FIELD(int8_t, m_bWrap) // 0x770
    NETVAR_FIELD(float, m_flFramerate) // 0x774
    NETVAR_FIELD(int8_t, m_bNewAnimCommandsSemaphore) // 0x778
    NETVAR_FIELD(float, m_flFloatLerpStartValue) // 0x77C
    NETVAR_FIELD(float, m_flFloatLerpEndValue) // 0x780
    NETVAR_FIELD(float, m_flFloatLerpTransitionTime) // 0x784
    NETVAR_FIELD(int8_t, m_bFloatLerpWrap) // 0x788
    NETVAR_FIELD(int32_t, m_nModifyMode) // 0x790
};

} // namespace Netvar
