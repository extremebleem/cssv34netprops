// DT_BaseViewModel - generated from the receive tables of the game, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Client classes: CBaseViewModel
#pragma once

namespace Netvar {

template <class Self, class Base = NoBase<Self>>
struct DT_BaseViewModel : Base
{
    NETVAR_FRAGMENT(DT_BaseViewModel)

    NETVAR_FIELD(int16_t, m_nModelIndex) // 0x84
    NETVAR_FIELD(int32_t, m_nSkin) // 0x464
    NETVAR_FIELD(int32_t, m_nBody) // 0x468
    NETVAR_FIELD(float, m_flPlaybackRate) // 0x48C
    NETVAR_FIELD(int32_t, m_nNewSequenceParity) // 0x608
    NETVAR_FIELD(int32_t, m_nResetEventsParity) // 0x60C
    NETVAR_FIELD(int8_t, m_nMuzzleFlashParity) // 0x6A4
    NETVAR_FIELD(int32_t, m_nViewModelIndex) // 0x6B0
    NETVAR_FIELD(CBaseHandle, m_hOwner) // 0x6B4
    NETVAR_FIELD(int32_t, m_nAnimationParity) // 0x6C0
    // not generated: m_nSequence, 0x634: custom proxy 0x2401AC50, the width of the variable is not known
    // not generated: m_fEffects, 0x70: custom proxy 0x240409D0, the width of the variable is not known
    // not generated: m_hWeapon, 0x6DC: custom proxy 0x2401A870, the width of the variable is not known
    // not generated: m_flPoseParameter, 0x0: offset 0 of an entity is its vtable: a value that only its proxy stores
};

} // namespace Netvar
