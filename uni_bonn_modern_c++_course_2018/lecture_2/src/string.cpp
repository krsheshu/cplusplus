// Copyright: Free
// Author: krsheshu

#include <iostream>
#include <string>

int main() {
  const std::string hello = "Hello";
  std::cout << "Type your name" << std::endl;

  std::string name = "";
  std::cin >> name;
  std::cout << hello + ", " + name + "!" << std::endl;

  return 0;
}
