#include <iostream>
#include <iomanip>

double function3p1() {
  double lhs = 0.0, rhs = lhs;

  for (size_t i = 0; i < 29; ++i) {
    lhs += i * i + 3.0 * i - 5.0;
  }

  for (size_t j = 0, mul = 1; j < 13; ++j, mul *= j) {
    double val = 1.0 - 1.0 / mul;
    rhs += val * val;
  }

  return lhs + rhs;
}

void task3p1() {
  std::cout << "f() = "
      << std::fixed << std::setprecision(6)
      << function3p1() << std::endl;
}

