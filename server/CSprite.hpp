// CSprite, the table DT_Sprite - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseEntity
// Server classes: CSprite
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CSprite : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_Sprite)

    NETVAR_FIELD(CBaseHandle, m_hAttachedToEntity) // 0x350, flags 0x5 SPROP_UNSIGNED|SPROP_NOSCALE
    NETVAR_FIELD(int32_t, m_nAttachment) // 0x354
    NETVAR_FIELD(float, m_flSpriteFramerate) // 0x358, flags 0x10 SPROP_ROUNDUP
    NETVAR_FIELD(float, m_flFrame) // 0x35C, flags 0x8 SPROP_ROUNDDOWN
    NETVAR_FIELD(int32_t, m_nBrightness) // 0x364, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_flBrightnessTime) // 0x368, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flScaleTime) // 0x370, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(int8_t, m_bWorldSpaceScale) // 0x374, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_flGlowProxySize) // 0x378, flags 0x10 SPROP_ROUNDUP
    NETVAR_FIELD(float, m_flHDRColorScale) // 0x37C, flags 0x4 SPROP_NOSCALE
    // not generated: m_flSpriteScale, 0x36C: the receive tables of the game list it: custom proxy 0x24154C20, the width of the variable is not known
};

} // namespace NetvarServer
