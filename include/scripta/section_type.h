#ifndef SCRIPTA_SECTION_TYPE_H
#define SCRIPTA_SECTION_TYPE_H

namespace scripta
{
enum class SectionType : int
{
    NA = -1,
    WALL = 1,
    INFILL = 2,
    SKIN = 3,
    SUPPORT = 4,
    ADHESION = 5,
    IRONING = 6,
    MESH = 7,
    DOTS = 8,
    CONCENTRIC_INFILL = 9
};
} // namespace scripta

#endif // SCRIPTA_SECTION_TYPE_H
