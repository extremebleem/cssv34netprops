// DT_EnvScreenEffect - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseEntity
// Client classes: CEnvScreenEffect
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_EnvScreenEffect : Base
{
    NETVAR_FRAGMENT(DT_EnvScreenEffect)

    NETVAR_FIELD(float, m_flDuration) // 0x460
    NETVAR_FIELD(int32_t, m_nType) // 0x464
};

} // namespace Netvar
