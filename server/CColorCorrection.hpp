// CColorCorrection, the table DT_ColorCorrection - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Server classes: CColorCorrection
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CColorCorrection : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_ColorCorrection)

    NETVAR_FIELD(Vector, m_vecOrigin) // 0x31C, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(int8_t, m_bEnabled) // 0x351, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_MinFalloff) // 0x358, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_MaxFalloff) // 0x35C, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_MaxWeight) // 0x360, flags 0x4 SPROP_NOSCALE
    // not generated: m_netlookupFilename, 0x364: a send prop of a string says nothing about the length of its buffer, and the receive tables of the game have no such field
};

} // namespace NetvarServer
