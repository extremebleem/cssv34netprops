// CPredictedViewModel, the table DT_PredictedViewModel - generated from the send tables of the server, do not edit.
// Include at global scope, after netvar_fields.hpp and netvar_tables.inc, before the class that derives from it.
// The offsets in the comments are from the start of the table.
// Netvar parent: CBaseViewModel
// Server classes: CPredictedViewModel
#pragma once

namespace NetvarServer {

using ::Netvar::NoBase;
using ::Netvar::View;

template <class Self, class Base = NoBase<Self>>
struct CPredictedViewModel : Base
{
    NETVAR_FRAGMENT_AS("server:", DT_PredictedViewModel)
};

} // namespace NetvarServer
