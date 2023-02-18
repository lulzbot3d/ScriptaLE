#ifndef SCRIPTA_VISUAL_DATA_INFO_H
#define SCRIPTA_VISUAL_DATA_INFO_H

namespace scripta
{
struct CellVisualDataInfo
{
    constexpr CellVisualDataInfo(auto&&... args){};
};

struct PointVisualDataInfo
{
    constexpr PointVisualDataInfo(auto&&... args){};
};
} // namespace scripta

#endif // SCRIPTA_VISUAL_DATA_INFO_H
