#include <string.h>

constexpr const int DEXTER_MAX_PASSWORD_LENGTH = 100;

class Core {
  const int m_password_length;
  int m_password[DEXTER_MAX_PASSWORD_LENGTH + 1];

public:
  Core(const int password_length, const int password[]);

  int get_password_length() const;
  bool set_password(const int originalPassword[], const int password[]);
  bool verify_password(const int password[]) const;
};
