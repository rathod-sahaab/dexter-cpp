#ifndef DEXTER_PAIR_HPP
#define DEXTER_PAIR_HPP

namespace Dexter {
template <typename T, typename U> class pair {
public:
  T first;
  U second;
} __attribute__((packed));
} // namespace Dexter

#endif
