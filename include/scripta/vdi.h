// Copyright (c) 2024 UltiMaker
// Scripta is released under the AGPLv3 or higher

#ifndef SCRIPTA_INCLUDE_SCRIPTA_VDI_H
#define SCRIPTA_INCLUDE_SCRIPTA_VDI_H

namespace scripta
{
struct CellVDI
{
    constexpr CellVDI(auto&&... args){};
};

struct PointVDI
{
    constexpr PointVDI(auto&&... args){};
};
} // namespace scripta

#endif // SCRIPTA_INCLUDE_SCRIPTA_VDI_H
