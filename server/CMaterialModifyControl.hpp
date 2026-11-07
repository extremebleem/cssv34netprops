// CMaterialModifyControl, the table DT_MaterialModifyControl - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseEntity
// Server classes: CMaterialModifyControl
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CMaterialModifyControl : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_MaterialModifyControl)

    NETVAR_FIELD_STRING(m_szMaterialName, 255) // 0x350, char[255]
    NETVAR_FIELD_STRING(m_szMaterialVar, 255) // 0x44F, char[255]
    NETVAR_FIELD_STRING(m_szMaterialVarValue, 255) // 0x54E, char[255]
    NETVAR_FIELD(int32_t, m_iFrameStart) // 0x650
    NETVAR_FIELD(int32_t, m_iFrameEnd) // 0x654
    NETVAR_FIELD(int8_t, m_bWrap) // 0x658, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_flFramerate) // 0x65C, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(int8_t, m_bNewAnimCommandsSemaphore) // 0x660, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_flFloatLerpStartValue) // 0x664, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flFloatLerpEndValue) // 0x668, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flFloatLerpTransitionTime) // 0x66C, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(int32_t, m_nModifyMode) // 0x670, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
