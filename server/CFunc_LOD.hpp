// CFunc_LOD, the table DT_Func_LOD - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseEntity
// Server classes: CFunc_LOD
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CFunc_LOD : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_Func_LOD)

    NETVAR_FIELD(float, m_fDisappearDist) // 0x350, flags 0x4 SPROP_NOSCALE
};

} // namespace NetvarServer
