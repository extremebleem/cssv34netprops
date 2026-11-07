// CEntityDissolve, the table DT_EntityDissolve - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseEntity
// Server classes: CEntityDissolve
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CEntityDissolve : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_EntityDissolve)

    NETVAR_FIELD(float, m_flStartTime) // 0x350, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flFadeInStart) // 0x354, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flFadeInLength) // 0x358, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flFadeOutModelStart) // 0x35C, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flFadeOutModelLength) // 0x360, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flFadeOutStart) // 0x364, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_flFadeOutLength) // 0x368, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(int32_t, m_nDissolveType) // 0x36C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(Vector, m_vDissolverOrigin) // 0x370, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(int32_t, m_nMagnitude) // 0x37C, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
