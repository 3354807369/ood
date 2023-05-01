#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main() {
  std::string input;
  std::getline(std::cin, input);
  std::istringstream iss(input);
  std::vector<int> list;
  int num;
  while (iss >> num) {
    list.push_back(num);
  }
  QuickSort qs;
  RecursiveBinarySearch rbs;
  list = qs.sort(list);
  bool isFound = rbs.search(list, 1);
  std::cout << (isFound ? "true" : "false");
  for (int i = 0; i < list.size(); ++i) {
    std::cout << " " << list[i];
  }
  std::cout << std::endl;
  return 0;
}
