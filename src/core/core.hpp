#include "../commons/types.hpp"
#include "hasher/hash.hpp"
#include "store/array-store.hpp"
#include <string.h>

namespace Dexter {
class Core {
  // members
  Hash m_password_hash;

  // dependencies
  IArrayStore &d_password_store;
  IHasher &d_hasher;

public:
  Core(IArrayStore &array_store, IHasher &hasher);

  int get_password_length() const;
  bool set_password(const Password &old_password, const Password &new_password);
  bool verify_password(const Password &password) const;
};
} // namespace Dexter
