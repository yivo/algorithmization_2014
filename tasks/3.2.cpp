#include <iostream>
#include <iomanip>
#include <cmath>

template<class Function>
void tablerize3p2(Function func, double x, double threshold, double step) {
  if (x > threshold) {return;}

  std::cout << std::left << std::showpos << std::fixed << std::setprecision(6);
  std::cout << std::setw(15) << "x" << "f(x)" << std::endl;

  do {
    std::cout << std::setw(15) << x << func(x) << std::endl;
    x += step;
  } while (x <= threshold);
}

double function3p2(double x) {
  return 1.0 / x + std::sqrt(std::abs(2.0 * x + std::pow(1.0 + x * x, 2.0)));
}

void task3p2() {
  auto x = -1.1;
  auto threshold = 4.5;
  auto step = 0.4;
  tablerize3p2(function3p2, x, threshold, step);
}

