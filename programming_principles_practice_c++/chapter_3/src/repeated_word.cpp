#include <cmath>
#include <iostream>

int main() {
  std::string previous = " ", current;
  int pos = 0;

  while (std::cin >> current) {
    ++pos;
    std::cout << "Current Word: " << current << " Previous word: " << previous
              << "\n";
    if (current == previous)
      std::cout << "Word: " << current << " repeated at position: " << pos
                << "\n";
    previous = current;
  }
}
