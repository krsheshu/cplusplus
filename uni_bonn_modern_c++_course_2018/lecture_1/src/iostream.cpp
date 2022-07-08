// Copyright: Free
// Author: krsheshu

#include <iostream>

int main() {
  int a = 0;
  std::cout << "This is printed on standard output stream" << std::endl;
  std::cerr << "This is printed on standard error stream" << std::endl;
  std::cout << "Enter a number in standard input stream" << std::endl;
  std::cin >> a;
  std::cout << "Captured number on the standard input stream is " << a
            << std::endl;

  return 0;
}
