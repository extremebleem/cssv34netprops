// CBasePropDoor, the table DT_BasePropDoor - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CDynamicProp
// Server classes: CBasePropDoor
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CBasePropDoor : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_BasePropDoor)
};

} // namespace NetvarServer
