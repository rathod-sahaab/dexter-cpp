#ifndef DEXTER_HASH_HPP
#define DEXTER_HASH_HPP

#include "../../commons/collections.hpp"
#include "../../commons/constants.hpp"
#include "../../commons/types.hpp"

namespace Dexter {
class IHasher {
public:
  virtual Hash hash(Dexter::Password hash) = 0;

  virtual bool verify_hash(const Dexter::Password &password,
                           const Dexter::Hash &hash) = 0;
};

} // namespace Dexter

#endif
