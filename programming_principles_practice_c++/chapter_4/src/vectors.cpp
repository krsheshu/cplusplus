#include <iostream>
#include <vector>

int main() {
  std::vector<int> intvec = {1, 2, 3, 4};
  for (int i : intvec)  // range-for-loop
    std::cout << i << " ";
}
