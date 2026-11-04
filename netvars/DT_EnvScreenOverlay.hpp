// DT_EnvScreenOverlay - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: DT_BaseEntity
// Client classes: CEnvScreenOverlay
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_EnvScreenOverlay : Base
{
    NETVAR_FRAGMENT(DT_EnvScreenOverlay)

    NETVAR_FIELD(float, m_flStartTime) // 0xE80
    NETVAR_FIELD(int32_t, m_iDesiredOverlay) // 0xE84
    NETVAR_FIELD(int8_t, m_bIsActive) // 0xE88
    // not generated: m_iszOverlayNames, 0x0: array of prop type 3 is not generated
    // not generated: m_flOverlayTimes, 0x0: offset 0 of an entity is its vtable: a value that only its proxy stores
};

} // namespace Netvar
