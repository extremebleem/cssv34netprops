// CPoseController, the table DT_PoseController - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseEntity
// Server classes: CPoseController
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CPoseController : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_PoseController)

    NETVAR_FIELD_ARRAY(CBaseHandle, m_hProps, 4) // 0x350, flags 0x200 SPROP_PROXY_ALWAYS_YES, CBaseHandle[4]
    NETVAR_FIELD_ARRAY(int8_t, m_chPoseIndex, 4) // 0x360, flags 0x200 SPROP_PROXY_ALWAYS_YES, int8_t[4]
    NETVAR_FIELD(int8_t, m_bPoseValueParity) // 0x365, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_fPoseValue) // 0x370
    NETVAR_FIELD(float, m_fCycleFrequency) // 0x374
    NETVAR_FIELD(int32_t, m_nFModType) // 0x378, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_fFModTimeOffset) // 0x37C
    NETVAR_FIELD(float, m_fFModRate) // 0x380
    NETVAR_FIELD(float, m_fFModAmplitude) // 0x384
};

} // namespace NetvarServer
