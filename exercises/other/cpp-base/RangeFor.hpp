#ifndef RANGE_BASE_FOR_HPP_D2DS
#define RANGE_BASE_FOR_HPP_D2DS

#include <common/common.hpp>

namespace d2ds {
// show your code
class PyRange {
public:
  PyRange() = default;

  PyRange(int start, int end, int step = 1) : step_(step) {
    int length = (end - start) / step;
    int i = 0;
    for (int s = start; s < end; s += step) {
      container_[i++] = s;
    }
    end_ = &container_[length];
  }

  ~PyRange() = default;
  const int *begin() const { return container_; };
  const int *end() const { return end_; };

private:
  int container_[1000];
  int *end_;
  int step_{1};
};

} // namespace d2ds

#endif