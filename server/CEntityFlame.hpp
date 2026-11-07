// CEntityFlame, the table DT_EntityFlame - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseEntity
// Server classes: CEntityFlame
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CEntityFlame : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_EntityFlame)

    NETVAR_FIELD(CBaseHandle, m_hEntAttached) // 0x350, flags 0x5 SPROP_UNSIGNED|SPROP_NOSCALE
    NETVAR_FIELD(float, m_flSize) // 0x354, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(int8_t, m_bUseHitboxes) // 0x358, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_flLifetime) // 0x35C, flags 0x4 SPROP_NOSCALE
};

} // namespace NetvarServer
