#include "core.hpp"
#include "store/array-store.hpp"

namespace Dexter {
Core::Core(IArrayStore &array_store) : d_password_store(array_store) {
  const pair<int, int[]> password_and_length = this->d_password_store.get();

  this->m_password_length = password_and_length.first;
  memcpy(this->m_password, password_and_length.second,
         this->m_password_length * sizeof(int));
}

int Core::get_password_length() const { return m_password_length; }

bool Core::set_password(const int originalPassword[], const int password[]) {
  if (!this->verify_password(originalPassword)) {
    return false;
  }
  // TODO: Hash password
  memcpy(this->m_password, password, sizeof(int) * m_password_length);
  this->d_password_store.set(m_password_length, m_password);
  return true;
}

bool Core::verify_password(const int password[]) const {
  // TODO: Hash check
  return memcmp(this->m_password, password, m_password_length * sizeof(int)) ==
         0;
}
} // namespace Dexter
