#ifndef DEXTER_PAIR_HPP
#define DEXTER_PAIR_HPP

namespace Dexter {
template <typename T, typename U> class pair {
public:
  T first;
  U second;
} __attribute__((packed));

template <typename T, const int MAX_SIZE> class array {
public:
  int size;
  T data[MAX_SIZE];

  const T operator[](int i) const { return data[i]; }

  const void operator=(const array<T, MAX_SIZE> &other) {
    this->size = other.size;
    memcpy(this->data, other.data, sizeof(T) * other.size);
  }
} __attribute__((packed));

} // namespace Dexter

#endif
