// CColorCorrectionVolume, the table DT_ColorCorrectionVolume - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Server classes: CColorCorrectionVolume
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CColorCorrectionVolume : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_ColorCorrectionVolume)

    NETVAR_FIELD(float, m_Weight) // 0x430, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD_STRING(m_lookupFilename, 260) // 0x438, char[260]
};

} // namespace NetvarServer
