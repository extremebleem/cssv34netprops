// CTESpriteSpray, the table DT_TESpriteSpray - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseTempEntity
// Server classes: CTESpriteSpray
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CTESpriteSpray : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_TESpriteSpray)

    NETVAR_FIELD(Vector, m_vecOrigin) // 0xC, flags 0x2 SPROP_COORD
    NETVAR_FIELD(Vector, m_vecDirection) // 0x18, flags 0x2 SPROP_COORD
    NETVAR_FIELD(int32_t, m_nModelIndex) // 0x24
    NETVAR_FIELD(int32_t, m_nSpeed) // 0x28, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_fNoise) // 0x2C, flags 0x8 SPROP_ROUNDDOWN
    NETVAR_FIELD(int32_t, m_nCount) // 0x30, flags 0x1 SPROP_UNSIGNED
};

} // namespace NetvarServer
