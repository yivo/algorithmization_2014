#include <iostream>
#include <vector>
#include <algorithm>
#include "yess/yess.h"

void task4() {
  std::vector<int> array(12);

  for (auto &num : array) {
    num = yess::rand(0, 30);
    std::cout << num << " ";
  }

  int number;

  std::cout << "\nNumber: ";
  std::cin >> number;

  auto it = std::find(array.begin(), array.end(), number);

  if (it != array.end()) {
    std::cout << "Index is " << std::distance(array.begin(), it);
  } else {
    std::cout << "Not found!";
  }
}
