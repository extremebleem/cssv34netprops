// DT_Sprite - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseEntity
// Client classes: CSprite
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_Sprite : Base
{
    NETVAR_FRAGMENT(DT_Sprite)

    NETVAR_FIELD(CBaseHandle, m_hAttachedToEntity) // 0x470
    NETVAR_FIELD(int32_t, m_nAttachment) // 0x474
    NETVAR_FIELD(float, m_flSpriteFramerate) // 0x478
    NETVAR_FIELD(float, m_flFrame) // 0x47C
    NETVAR_FIELD(int32_t, m_nBrightness) // 0x484
    NETVAR_FIELD(float, m_flBrightnessTime) // 0x488
    NETVAR_FIELD(float, m_flScaleTime) // 0x490
    NETVAR_FIELD(int8_t, m_bWorldSpaceScale) // 0x494
    NETVAR_FIELD(float, m_flGlowProxySize) // 0x498
    NETVAR_FIELD(float, m_flHDRColorScale) // 0x49C
    // not generated: m_flSpriteScale, 0x48C: custom proxy 0x24154C20, the width of the variable is not known
};

} // namespace Netvar
