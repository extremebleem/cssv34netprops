// CSceneEntity, the table DT_SceneEntity - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Server classes: CSceneEntity
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CSceneEntity : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_SceneEntity)

    NETVAR_FIELD(int8_t, m_bIsPlayingBack) // 0x3A8, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_bPaused) // 0x3A9, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nSceneStringIndex) // 0x400, flags 0x1 SPROP_UNSIGNED
    // not generated: m_flForceClientTime, 0x3AC: the receive tables of the game list it: custom proxy 0x24078DA0, the width of the variable is not known
    // not generated: m_hActorList, 0x0: the receive tables of the game have no such sub-table, and a send prop does not say whether it sits inline
};

} // namespace NetvarServer
