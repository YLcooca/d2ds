#ifndef TEMPLATE_HPP_D2DS
#define TEMPLATE_HPP_D2DS

namespace d2ds {
// show your code
template <typename T> T max(T a, T b) { return a > b ? a : b; }
template <typename T> class Box {
private:
  T box_;

public:
  Box() {}
  Box(T v) : box_(v) {}
  void set_value(T v) { box_ = v; }
  T get_value() { return box_; }
};
} // namespace d2ds

#endif