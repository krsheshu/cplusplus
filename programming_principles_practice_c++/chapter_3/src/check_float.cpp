#include <iostream>

int main() {
  float a = 1.3f;

  if (a == 1.3) {
    std::cout << "Float comparison successful. input: " << a << std::endl;
    return 1;
  } else {
    std::cout << "Float comparison failed! input: " << a << std::endl;
  }
  return 0;
}
