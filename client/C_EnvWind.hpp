// C_EnvWind, the table DT_EnvWind - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: C_BaseEntity
// Client classes: CEnvWind
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_EnvWind : Base
{
    NETVAR_FRAGMENT(DT_EnvWind)

    NETVAR_TABLE(DT_EnvWindShared, m_EnvWindShared) // 0x460
};

} // namespace Netvar
