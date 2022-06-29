// Copyright: Free
// Author: krsheshu

#include <iostream>

using namespace std;

int main() {
  int num = 42;  // Name has to fit on slides
  auto& ref = num;
  const auto& kRef = num;

  ref = 0;
  cout << ref << " " << &ref << " " << num << " " << &num << " " << kRef << " "
       << &kRef << endl;

  num = 42;
  cout << ref << " " << &ref << " " << num << " " << &num << " " << kRef << " "
       << &kRef << endl;

  return 0;
}
