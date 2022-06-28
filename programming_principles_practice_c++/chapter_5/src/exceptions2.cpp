#include <exception>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> v;

  try {
    for (int x; std::cin >> x;) v.push_back(x);

    for (int i = 0; i <= int(v.size()); ++i)

      std::cout << "v[" << i << "]" << v[i] << std::endl;

  } catch (std::out_of_range) {
    std::cerr << "Out of Range Error\n";
    return 1;

  } catch (...) {
    std::cerr << "Exception: something went wrong\n";
    return 2;
  }
}
