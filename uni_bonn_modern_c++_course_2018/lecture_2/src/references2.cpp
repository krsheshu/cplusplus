// Copyright: Free
// Author: krsheshu

#include <iostream>
#include <vector>

// pass a reference instead of a value:
//                      V
int smallest_element(std::vector<int>& vec) {
  auto smallest_value = vec[0];
  for (auto x : vec) {
    if (x < smallest_value) {
      smallest_value = x;
    }
  }
  return smallest_value;
}

int main() {
  std::vector<int> vec;
  for (size_t i = 0; i < 10000000; ++i) {
    vec.push_back(i);
  }
  // vec is automatically passed as reference:
  std::cout << "smallest element of vec is " << smallest_element(vec)
            << std::endl;
}
