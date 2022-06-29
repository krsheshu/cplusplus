// Copyright: Free
// Author: krsheshu

#include <algorithm>
#include <iostream>
#include <vector>

template <typename myType>
int print_contents(const myType a) {
  for (const auto& i : a) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  return 0;
}

int main() {
  std::vector<float> vector{10.0f, 2.3, 5.0f, 4.2f, 6.3f};

  vector.reserve(100);
  std::cout << "Contents: ";
  print_contents<>(vector);

  std::cout << "vector.front(): " << vector.front() << std::endl;
  std::cout << "vector.back(): " << vector.back() << std::endl;
  std::cout << "vector.size(): " << vector.size() << std::endl;

  vector.emplace_back(8);
  vector.emplace_back(18);
  std::sort(vector.begin(), vector.end());
  std::cout << "After sorting: " << std::endl;
  std::cout << "vector.front(): " << vector.front() << std::endl;
  std::cout << "vector.back(): " << vector.back() << std::endl;
  std::cout << "vector.size(): " << vector.size() << std::endl;

  std::cout << "Contents: ";
  print_contents<>(vector);

  std::cout << "vector of Strings: " << std::endl;
  const std::vector<std::string> string_vector{"Hello,", "Sheshu"};

  std::cout << "Contents: ";
  print_contents<>(string_vector);

  return 0;
}
