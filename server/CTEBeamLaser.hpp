// CTEBeamLaser, the table DT_TEBeamLaser - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CTEBaseBeam
// Server classes: CTEBeamLaser
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CTEBeamLaser : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_TEBeamLaser)

    NETVAR_FIELD(int32_t, m_nStartEntity) // 0x48, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nEndEntity) // 0x4C, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
