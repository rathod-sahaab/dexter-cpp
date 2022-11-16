#ifndef DEXTER_TYPES_HPP
#define DEXTER_TYPES_HPP

#include "collections.hpp"
#include "constants.hpp"

namespace Dexter {
using Password = array<unsigned short, DEXTER_MAX_PASSWORD_LENGTH>;
using Hash = array<unsigned short, DEXTER_MAX_HASH_LENGTH>;
} // namespace Dexter

#endif
