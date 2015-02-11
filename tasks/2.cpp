#include <iomanip>
#include <cmath>
#include "yess/yess.h"

double function2(double x) {
  if (x <= 0.0) {
    return 0.0;
  } else if (x <= 1.0) {
    return x * x - x;
  } else {
    return x * x - std::sin(yess::pi() * x * x) - 1.0;
  }
}

void task2() {
  double x;

  std::cout << "x = ";
  std::cin >> x;

  std::cout << "f(x) = "
      << std::fixed << std::setprecision(6)
      << function2(x) << std::endl;
}
