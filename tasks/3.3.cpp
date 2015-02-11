#include <iostream>
#include <iomanip>
#include <cstdint>

template<class Function>
double accumulate_series(Function func, double e) {
  uint64_t counter = 0;
  double total = 0.0;
  double value;

  while ((value = func(++counter)) >= e) {
    total += value;
  }
  return total;
}

void task3p3() {
  auto func = [](double n) {
    return 1.0 / ((n + 1.0) * (n + 1.0));
  };

  std::cout << "f() = " << std::fixed
      << std::setprecision(10)
      << accumulate_series(func, 0.0001) << std::endl;
}
