// DT_CollisionProperty - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct DT_CollisionProperty : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_CollisionProperty)

    // not generated: m_vecMins, 0x8: the receive tables of the game list it: custom proxy 0x240A6570, the width of the variable is not known
    // not generated: m_vecMaxs, 0x14: the receive tables of the game list it: custom proxy 0x240A6590, the width of the variable is not known
    // not generated: m_nSolidType, 0x29: the receive tables of the game list it: custom proxy 0x240A6530, the width of the variable is not known
    // not generated: m_usSolidFlags, 0x24: the receive tables of the game list it: custom proxy 0x240A6550, the width of the variable is not known
    // not generated: m_nSurroundType, 0x28: the receive tables of the game list it: custom proxy 0x240A60B0, the width of the variable is not known
    // not generated: m_triggerBloat, 0x2A: the receive tables of the game list it: custom proxy 0x240A60B0, the width of the variable is not known
    // not generated: m_vecSpecifiedSurroundingMins, 0x2C: the receive tables of the game list it: custom proxy 0x240A6010, the width of the variable is not known
    // not generated: m_vecSpecifiedSurroundingMaxs, 0x38: the receive tables of the game list it: custom proxy 0x240A6010, the width of the variable is not known
};

} // namespace NetvarServer
