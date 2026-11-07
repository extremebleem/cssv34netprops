// CFuncConveyor, the table DT_FuncConveyor - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseEntity
// Server classes: CFuncConveyor
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CFuncConveyor : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_FuncConveyor)

    NETVAR_FIELD(float, m_flConveyorSpeed) // 0x360, flags 0x4 SPROP_NOSCALE
};

} // namespace NetvarServer
