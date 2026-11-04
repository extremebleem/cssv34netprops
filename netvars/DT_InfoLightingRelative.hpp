// DT_InfoLightingRelative - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseEntity
// Client classes: CInfoLightingRelative
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_InfoLightingRelative : Base
{
    NETVAR_FRAGMENT(DT_InfoLightingRelative)

    NETVAR_FIELD(CBaseHandle, m_hLightingLandmark) // 0x460
};

} // namespace Netvar
