#ifndef DEXTER_ARRAY_STORE_HPP
#define DEXTER_ARRAY_STORE_HPP

#include "../../commons/pair.hpp"

namespace Dexter {

class IArrayStore {
public:
  virtual void set(int numbers_length, int numbers[]) = 0;

  /// Returns the array and the number of elements in the array
  virtual Dexter::pair<int, int[]> get() = 0;
};
} // namespace Dexter

#endif
