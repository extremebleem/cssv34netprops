// DT_SteamJet - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseParticleEntity
// Client classes: CSteamJet
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_SteamJet : Base
{
    NETVAR_FRAGMENT(DT_SteamJet)

    NETVAR_FIELD(float, m_SpreadSpeed) // 0x54C
    NETVAR_FIELD(float, m_Speed) // 0x550
    NETVAR_FIELD(float, m_StartSize) // 0x554
    NETVAR_FIELD(float, m_EndSize) // 0x558
    NETVAR_FIELD(float, m_Rate) // 0x55C
    NETVAR_FIELD(float, m_JetLength) // 0x560
    NETVAR_FIELD(int32_t, m_bEmit) // 0x564
    NETVAR_FIELD(int32_t, m_nType) // 0x568
    NETVAR_FIELD(int8_t, m_bFaceLeft) // 0x56C
    NETVAR_FIELD(int32_t, m_spawnflags) // 0x570
    NETVAR_FIELD(float, m_flRollSpeed) // 0x574
};

} // namespace Netvar
