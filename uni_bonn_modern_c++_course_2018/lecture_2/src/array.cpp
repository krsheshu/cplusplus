// Copyright: Free
// Author: krsheshu

#include <algorithm>
#include <array>
#include <iostream>

template <typename myType>
int print_contents(myType a) {
  for (auto i : a) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  return 0;
}

int main() {
  std::array<int, 5> array{10, 2, 5, 4, 6};

  std::cout << "Contents: ";
  print_contents<>(array);

  std::cout << "array.begin(): " << array.begin() << std::endl;
  std::cout << "array.end(): " << array.end() << std::endl;
  std::cout << "array.front(): " << array.front() << std::endl;
  std::cout << "array.back(): " << array.back() << std::endl;
  std::cout << "array.size(): " << array.size() << std::endl;

  std::sort(array.begin(), array.end());
  std::cout << "After sorting: " << std::endl;
  std::cout << "array.begin(): " << array.begin() << std::endl;
  std::cout << "array.end(): " << array.end() << std::endl;
  std::cout << "array.front(): " << array.front() << std::endl;
  std::cout << "array.back(): " << array.back() << std::endl;
  std::cout << "array.size(): " << array.size() << std::endl;

  std::cout << "Contents: ";
  print_contents<>(array);

  std::cout << "Array of Strings: " << std::endl;
  const std::array<std::string, 2> string_array{"Hello,", "Sheshu"};

  std::cout << "Contents: ";
  print_contents<>(string_array);

  return 0;
}
