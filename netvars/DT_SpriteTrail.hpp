// DT_SpriteTrail - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_Sprite
// Client classes: CSpriteTrail
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_SpriteTrail : Base
{
    NETVAR_FRAGMENT(DT_SpriteTrail)

    NETVAR_FIELD(float, m_flLifeTime) // 0xAF4
    NETVAR_FIELD(float, m_flStartWidth) // 0xAF8
    NETVAR_FIELD(float, m_flEndWidth) // 0xAFC
    NETVAR_FIELD(float, m_flStartWidthVariance) // 0xB00
    NETVAR_FIELD(float, m_flTextureRes) // 0xB04
    NETVAR_FIELD(float, m_flMinFadeLength) // 0xB08
    NETVAR_FIELD(Vector, m_vecSkyboxOrigin) // 0xB0C
    NETVAR_FIELD(float, m_flSkyboxScale) // 0xB18
};

} // namespace Netvar
