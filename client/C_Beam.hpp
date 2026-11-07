// C_Beam, the table DT_Beam - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Client classes: CBeam
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct C_Beam : Base
{
    NETVAR_FRAGMENT(DT_Beam)

    NETVAR_TABLE(DT_BeamPredictableId, beampredictable_id) // 0x0
    NETVAR_FIELD(int8_t, m_nRenderFX) // 0x54
    NETVAR_FIELD(int32_t, m_clrRender) // 0x58
    NETVAR_FIELD(int8_t, m_nRenderMode) // 0x74
    NETVAR_FIELD(int16_t, m_nModelIndex) // 0x84
    NETVAR_FIELD(Vector, m_vecOrigin) // 0x29C
    NETVAR_FIELD(float, m_flFrameRate) // 0x460
    NETVAR_FIELD(float, m_flHDRColorScale) // 0x464
    NETVAR_FIELD(int32_t, m_nNumBeamEnts) // 0x470
    NETVAR_FIELD(int32_t, m_nHaloIndex) // 0x478
    NETVAR_FIELD(int32_t, m_nBeamType) // 0x47C
    NETVAR_FIELD(int32_t, m_nBeamFlags) // 0x480
    NETVAR_FIELD(float, m_fWidth) // 0x4D4
    NETVAR_FIELD(float, m_fEndWidth) // 0x4D8
    NETVAR_FIELD(float, m_fFadeLength) // 0x4DC
    NETVAR_FIELD(float, m_fHaloScale) // 0x4E0
    NETVAR_FIELD(float, m_fAmplitude) // 0x4E4
    NETVAR_FIELD(float, m_fStartFrame) // 0x4E8
    NETVAR_FIELD(float, m_flFrame) // 0x4F0
    NETVAR_FIELD(Vector, m_vecEndPos) // 0x4F4
    // not generated: m_fSpeed, 0x4EC: custom proxy 0x2401CE20, the width of the variable is not known
    // not generated: moveparent, 0x154: custom proxy 0x2413A090, the width of the variable is not known
    // not generated: m_hAttachEntity, 0x0: offset 0 of an entity is its vtable: a value that only its proxy stores
    // not generated: m_nAttachIndex, 0x0: offset 0 of an entity is its vtable: a value that only its proxy stores
};

} // namespace Netvar
