#ifndef SCRIPTA_LOGGER_H
#define SCRIPTA_LOGGER_H

#include <unordered_map>
#include <memory>

#include "scripta/vdi.h"

namespace scripta
{
using layer_map_t = std::unordered_map<int, double>;
using shared_layer_map_t = std::shared_ptr<layer_map_t>;

constexpr void setAll(auto&&... args){};

constexpr void log(auto&&... args){};

} // namespace scripta

#endif // SCRIPTA_LOGGER_H
