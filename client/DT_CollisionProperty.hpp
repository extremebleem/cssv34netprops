// DT_CollisionProperty - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_CollisionProperty : Base
{
    NETVAR_FRAGMENT(DT_CollisionProperty)

    // not generated: m_vecMins, 0x8: custom proxy 0x240A6570, the width of the variable is not known
    // not generated: m_vecMaxs, 0x14: custom proxy 0x240A6590, the width of the variable is not known
    // not generated: m_nSolidType, 0x29: custom proxy 0x240A6530, the width of the variable is not known
    // not generated: m_usSolidFlags, 0x24: custom proxy 0x240A6550, the width of the variable is not known
    // not generated: m_nSurroundType, 0x28: custom proxy 0x240A60B0, the width of the variable is not known
    // not generated: m_triggerBloat, 0x2A: custom proxy 0x240A60B0, the width of the variable is not known
    // not generated: m_vecSpecifiedSurroundingMins, 0x2C: custom proxy 0x240A6010, the width of the variable is not known
    // not generated: m_vecSpecifiedSurroundingMaxs, 0x38: custom proxy 0x240A6010, the width of the variable is not known
};

} // namespace Netvar
