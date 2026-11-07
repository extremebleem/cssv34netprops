// C_EnvDetailController, the table DT_DetailController - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Client classes: CEnvDetailController
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_EnvDetailController : Base
{
    NETVAR_FRAGMENT(DT_DetailController)

    NETVAR_FIELD(float, m_flFadeStartDist) // 0x460
    NETVAR_FIELD(float, m_flFadeEndDist) // 0x464
};

} // namespace Netvar
