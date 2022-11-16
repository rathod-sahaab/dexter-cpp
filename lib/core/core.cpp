#include "core.hpp"
#include "hasher/hash.hpp"
#include "store/array-store.hpp"

namespace Dexter {
Core::Core(IArrayStore &array_store, IHasher &hasher)
    : d_password_store(array_store), d_hasher(hasher) {
  const Hash hash = this->d_password_store.get();

  this->m_password_hash.size = hash.size;
  memcpy(this->m_password_hash.data, hash.data, hash.size);
}

int Core::get_password_length() const { return m_password_hash.size; }

bool Core::set_password(const Password &old_password,
                        const Password &new_password) {
  if (!this->verify_password(old_password)) {
    return false;
  }

  const auto new_hash = this->d_hasher.hash(new_password);

  this->m_password_hash = new_hash;

  this->d_password_store.set(new_hash);
  return true;
}

bool Core::verify_password(const Password &password) const {
  return this->d_hasher.verify_hash(password, this->m_password_hash);
}
} // namespace Dexter
