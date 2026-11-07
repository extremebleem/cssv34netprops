// CPlantedC4, the table DT_PlantedC4 - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseAnimating
// Server classes: CPlantedC4
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CPlantedC4 : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_PlantedC4)

    NETVAR_FIELD(int8_t, m_bBombTicking) // 0x468, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_flC4Blow) // 0x46C, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flTimerLength) // 0x470, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flDefuseLength) // 0x484, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flDefuseCountDown) // 0x488, flags 0x4 SPROP_NOSCALE
};

} // namespace NetvarServer
