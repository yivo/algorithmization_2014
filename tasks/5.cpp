#include <vector>
#include <numeric>
#include "yess/yess.h"

template <class Arithmetical>
using Row = std::vector<Arithmetical>;

template <class Arithmetical>
using Matrix = std::vector<Row<Arithmetical>>;

template<class Arithmetical>
Matrix<Arithmetical> generate_matrix(size_t rows_number, size_t columns_number) {
  Matrix<Arithmetical> matrix(rows_number, Row<Arithmetical>(columns_number));
  for (auto &row : matrix) {
    for (auto &num : row) {
      num = yess::rand<Arithmetical>(0, 100);
    }
  }
  return matrix;
}

template<class Arithmetical>
void show_matrix(const Matrix<Arithmetical> &matrix) {
  size_t i = 0;
  for (auto &row : matrix) {
    std::cout << std::setw(2) << "#" << ++i << ":";
    for (auto &num : row) {
      std::cout << std::setw(4) << num;
    }
    std::cout << std::endl;
  }
}

template <class Container>
double arithmetical_mean(const Container &container) {
  return std::accumulate(container.begin(), container.end(), 0.0) / container.size();
}

void task5() {
  auto matrix = generate_matrix<int>(5, 4);
  show_matrix(matrix);
  size_t i = 0;
  for (auto &row : matrix) {
    std::cout << std::setw(2) << "#" << ++i
              << " Avg:" << std::setw(6)
              << std::fixed << std::setprecision(2)
              << arithmetical_mean(row) << std::endl;
  }
}