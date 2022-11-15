#include "core.hpp"

Core::Core(const int password_length, const int password[])
    : m_password_length(password_length) {
  if (password_length > DEXTER_MAX_PASSWORD_LENGTH) {
    throw "Password length is too long";
  }
}

int Core::get_password_length() const { return m_password_length; }

bool Core::set_password(const int originalPassword[], const int password[]) {
  if (!this->verify_password(originalPassword)) {
    return false;
  }
  // TODO: Hash password
  // TODO: Store password
  memcpy(this->m_password, password, sizeof(int) * m_password_length);
  return true;
}

bool Core::verify_password(const int password[]) const {
  // TODO: Hash check
  return memcmp(this->m_password, password, m_password_length * sizeof(int)) == 0;
}
