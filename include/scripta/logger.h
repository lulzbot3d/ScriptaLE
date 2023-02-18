#ifndef SCRIPTA_LOGGER_H
#define SCRIPTA_LOGGER_H

#include <unordered_map>

#include "scripta/section_type.h"
#include "scripta/visual_data_info.h"

namespace scripta
{

using layer_map_t = std::unordered_map<int, double>;

constexpr void setAll(auto&&... args){};

constexpr void log(auto&&... args){};

} // namespace scripta

#endif // SCRIPTA_LOGGER_H
