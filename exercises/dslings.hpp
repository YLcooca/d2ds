#ifndef DSLINGS_HPP_D2DS
#define DSLINGS_HPP_D2DS

namespace d2ds {
// show your code

class MaxValue {
private:
  int value_{0};

public:
  MaxValue(int v) : value_(v) {}
  void set(int v) { value_ = v > value_ ? v : value_; }
  int get() { return value_; }
};

} // namespace d2ds

#endif