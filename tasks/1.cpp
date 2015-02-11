#include <iomanip>
#include <cmath>

double function1(double x, double y) {
  return std::pow(std::tan(
      std::sqrt(std::abs(x * x + y * y)) / (x * y)
  ), 2.0) + std::pow(std::cos(x * y), 3.0);
}

void task1() {
  double x, y;

  std::cout << "x = ";
  std::cin >> x;

  std::cout << "y = ";
  std::cin >> y;

  std::cout << "f(x, y) = "
      << std::fixed << std::setprecision(6)
      << function1(x, y) << std::endl;
}
