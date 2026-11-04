// DT_BaseCSGrenade - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_WeaponCSBase
// Client classes: CBaseCSGrenade
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_BaseCSGrenade : Base
{
    NETVAR_FRAGMENT(DT_BaseCSGrenade)

    NETVAR_FIELD(int8_t, m_bRedraw) // 0x778
    NETVAR_FIELD(int8_t, m_bPinPulled) // 0x779
    NETVAR_FIELD(float, m_fThrowTime) // 0x77C
};

} // namespace Netvar
