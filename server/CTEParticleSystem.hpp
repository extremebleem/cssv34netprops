// CTEParticleSystem, the table DT_TEParticleSystem - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseTempEntity
// Server classes: CTEParticleSystem
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CTEParticleSystem : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_TEParticleSystem)

    NETVAR_FIELD_AS(float, m_vecOrigin_0_, "m_vecOrigin[0]") // 0xC, flags 0x802 SPROP_COORD|SPROP_IS_A_VECTOR_ELEM
    NETVAR_FIELD_AS(float, m_vecOrigin_1_, "m_vecOrigin[1]") // 0x10, flags 0x802 SPROP_COORD|SPROP_IS_A_VECTOR_ELEM
    NETVAR_FIELD_AS(float, m_vecOrigin_2_, "m_vecOrigin[2]") // 0x14, flags 0x802 SPROP_COORD|SPROP_IS_A_VECTOR_ELEM
};

} // namespace NetvarServer
