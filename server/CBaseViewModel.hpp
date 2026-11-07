// CBaseViewModel, the table DT_BaseViewModel - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Server classes: CBaseViewModel
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CBaseViewModel : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_BaseViewModel)

    NETVAR_FIELD(int16_t, m_nModelIndex) // 0x1E
    NETVAR_FIELD(int32_t, m_nSkin) // 0x368
    NETVAR_FIELD(int32_t, m_nBody) // 0x36C
    NETVAR_FIELD(float, m_flPlaybackRate) // 0x378, flags 0x10 SPROP_ROUNDUP
    NETVAR_FIELD(int32_t, m_nNewSequenceParity) // 0x41C, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nResetEventsParity) // 0x420, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int8_t, m_nMuzzleFlashParity) // 0x424, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(int32_t, m_nViewModelIndex) // 0x468, flags 0x1 SPROP_UNSIGNED
    NETVAR_FIELD(CBaseHandle, m_hOwner) // 0x46C, flags 0x5 SPROP_UNSIGNED|SPROP_NOSCALE
    NETVAR_FIELD(int32_t, m_nAnimationParity) // 0x478, flags 0x1 SPROP_UNSIGNED
    // not generated: m_nSequence, 0x3A4: the receive tables of the game list it: custom proxy 0x2401AC50, the width of the variable is not known
    // not generated: m_fEffects, 0x6C: the receive tables of the game list it: custom proxy 0x240409D0, the width of the variable is not known
    // not generated: m_hWeapon, 0x490: the receive tables of the game list it: custom proxy 0x2401A870, the width of the variable is not known
    // not generated: m_flPoseParameter, 0x0: a send prop of an array says the stride of its elements, not the type of one element, and the receive tables of the game have no such field
};

} // namespace NetvarServer
