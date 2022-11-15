#include "store/array-store.hpp"
#include <string.h>

constexpr const int DEXTER_MAX_PASSWORD_LENGTH = 100;

namespace Dexter {
class Core {
  // members
  int m_password_length;
  int m_password[DEXTER_MAX_PASSWORD_LENGTH + 1];

  // dependencies
  IArrayStore &d_password_store;

public:
  Core(IArrayStore &array_store);

  int get_password_length() const;
  bool set_password(const int originalPassword[], const int password[]);
  bool verify_password(const int password[]) const;
};
} // namespace Dexter
