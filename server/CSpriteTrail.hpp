// CSpriteTrail, the table DT_SpriteTrail - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CSprite
// Server classes: CSpriteTrail
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CSpriteTrail : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_SpriteTrail)

    NETVAR_FIELD(float, m_flLifeTime) // 0x3A0, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flStartWidth) // 0x3A4, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flEndWidth) // 0x3A8, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flStartWidthVariance) // 0x3AC, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flTextureRes) // 0x3B0, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flMinFadeLength) // 0x3B4, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(Vector, m_vecSkyboxOrigin) // 0x3B8, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flSkyboxScale) // 0x3C4, flags 0x4 SPROP_NOSCALE
};

} // namespace NetvarServer
