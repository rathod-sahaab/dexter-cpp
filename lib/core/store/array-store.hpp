#ifndef DEXTER_ARRAY_STORE_HPP
#define DEXTER_ARRAY_STORE_HPP

#include "../commons/collections.hpp"
#include "../commons/constants.hpp"

namespace Dexter {

class IArrayStore {
public:
  virtual void set(const array<unsigned short, DEXTER_MAX_HASH_LENGTH> &hash) = 0;

  /// Returns the array and the number of elements in the array
  virtual array<unsigned short, DEXTER_MAX_HASH_LENGTH> get() = 0;
};
} // namespace Dexter

#endif
