// CWorld, the table DT_WORLD - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseEntity
// Server classes: CWorld
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CWorld : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_WORLD)

    NETVAR_FIELD(float, m_flWaveHeight) // 0x354, flags 0x10 SPROP_ROUNDUP
    NETVAR_FIELD(Vector, m_WorldMins) // 0x358, flags 0x2 SPROP_COORD
    NETVAR_FIELD(Vector, m_WorldMaxs) // 0x364, flags 0x2 SPROP_COORD
    NETVAR_FIELD(float, m_flMaxOccludeeArea) // 0x370, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flMinOccluderArea) // 0x374, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flMinPropScreenSpaceWidth) // 0x378, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flMaxPropScreenSpaceWidth) // 0x37C, flags 0x4 SPROP_NOSCALE
    // not generated: m_bStartDark, 0x384: a send prop of an int says how many bits go on the wire (1), not how many bytes the variable has, and the receive tables of the game have no such field
    // not generated: m_iszDetailSpriteMaterial, 0x380: a send prop of a string says nothing about the length of its buffer, and the receive tables of the game have no such field
    // not generated: m_bColdWorld, 0x385: a send prop of an int says how many bits go on the wire (1), not how many bytes the variable has, and the receive tables of the game have no such field
};

} // namespace NetvarServer
