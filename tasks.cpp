#include <unordered_map>
#include <functional>

#include "tasks/1.cpp"
#include "tasks/2.cpp"
#include "tasks/3.1.cpp"
#include "tasks/3.2.cpp"
#include "tasks/3.3.cpp"
#include "tasks/4.cpp"
#include "tasks/5.cpp"
#include "tasks/6.cpp"

using Task = std::function<void()>;
using TaskName = std::string;
using TaskCollection = std::unordered_map<TaskName, Task>;

TaskCollection collection;
bool tasks_collected = false;

const TaskCollection &get_tasks() {
  if (!tasks_collected) {
    collection.insert({"1", task1});
    collection.insert({"2", task2});
    collection.insert({"3.1", task3p1});
    collection.insert({"3.2", task3p2});
    collection.insert({"3.3", task3p3});
    collection.insert({"4", task4});
    collection.insert({"5", task5});
    collection.insert({"6", task6});
    tasks_collected = true;
  }
  return collection;
}

void run_task(const TaskName &task_name) {
  auto tasks = get_tasks();
  auto iter = tasks.find(task_name);
  if (iter != tasks.end()) {
    iter->second();
  }
}