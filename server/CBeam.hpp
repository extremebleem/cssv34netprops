// CBeam, the table DT_Beam - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Server classes: CBeam
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CBeam : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_Beam)

    NETVAR_TABLE_NS(NetvarServer, DT_BeamPredictableId, beampredictable_id) // 0x0
    NETVAR_FIELD(int8_t, m_nRenderFX) // 0x1C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_nRenderMode) // 0x1D, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int16_t, m_nModelIndex) // 0x1E
    NETVAR_FIELD(int32_t, m_clrRender) // 0x20, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(Vector, m_vecOrigin) // 0x31C
    NETVAR_FIELD(float, m_flFrameRate) // 0x350, flags 0x10 SPROP_ROUNDUP
    NETVAR_FIELD(float, m_flHDRColorScale) // 0x354, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(int32_t, m_nNumBeamEnts) // 0x360, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nHaloIndex) // 0x364, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nBeamType) // 0x368, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nBeamFlags) // 0x36C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(float, m_fWidth) // 0x3C0, flags 0x10 SPROP_ROUNDUP
    NETVAR_FIELD(float, m_fEndWidth) // 0x3C4, flags 0x10 SPROP_ROUNDUP
    NETVAR_FIELD(float, m_fFadeLength) // 0x3C8, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_fHaloScale) // 0x3CC, flags 0x4 SPROP_NOSCALE
    NETVAR_FIELD(float, m_fAmplitude) // 0x3D0, flags 0x8 SPROP_ROUNDDOWN
    NETVAR_FIELD(float, m_fStartFrame) // 0x3D4, flags 0x8 SPROP_ROUNDDOWN
    NETVAR_FIELD(float, m_flFrame) // 0x3DC, flags 0x8 SPROP_ROUNDDOWN
    NETVAR_FIELD(Vector, m_vecEndPos) // 0x3E0, flags 0x2 SPROP_COORD
    // not generated: m_hAttachEntity, 0x0: a send prop of an array says the stride of its elements, not the type of one element, and the receive tables of the game have no such field
    // not generated: m_nAttachIndex, 0x0: a send prop of an array says the stride of its elements, not the type of one element, and the receive tables of the game have no such field
    // not generated: m_fSpeed, 0x3D8: the receive tables of the game list it: custom proxy 0x2401CE20, the width of the variable is not known
    // not generated: moveparent, 0xE0: the receive tables of the game list it: custom proxy 0x2413A090, the width of the variable is not known
};

} // namespace NetvarServer
