#include <iostream>
#include "tasks.cpp"
#include "yess/yess.h"

int main() {
  std::string task_number;
  std::cout << "Task number: ";
  std::cin >> task_number;
  run_task(task_number);
  return 0;
}