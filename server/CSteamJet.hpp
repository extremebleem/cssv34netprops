// CSteamJet, the table DT_SteamJet - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseParticleEntity
// Server classes: CSteamJet
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CSteamJet : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_SteamJet)

    NETVAR_FIELD(int32_t, m_spawnflags) // 0xA4, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_SpreadSpeed) // 0x350, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_Speed) // 0x354, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_StartSize) // 0x358, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_EndSize) // 0x35C, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_Rate) // 0x360, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_JetLength) // 0x364, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(int32_t, m_bEmit) // 0x368, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_bFaceLeft) // 0x36C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nType) // 0x370, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_flRollSpeed) // 0x374, flags 0x4 SPROP_NOSCALE
};

} // namespace NetvarServer
