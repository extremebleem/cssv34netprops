// DT_PlantedC4 - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseAnimating
// Client classes: CPlantedC4
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_PlantedC4 : Base
{
    NETVAR_FRAGMENT(DT_PlantedC4)

    NETVAR_FIELD(int8_t, m_bBombTicking) // 0x6B0
    NETVAR_FIELD(float, m_flC4Blow) // 0x6BC
    NETVAR_FIELD(float, m_flTimerLength) // 0x6C0
    NETVAR_FIELD(float, m_flDefuseLength) // 0x6C4
    NETVAR_FIELD(float, m_flDefuseCountDown) // 0x6C8
};

} // namespace Netvar
