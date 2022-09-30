// Copyright: Free
// Author: krsheshu
// Brief: Test code for vector multiply accumulate

#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

template <typename myType>
int print_contents(const myType& a) {
  for (const auto& i : a) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  return 0;
}

template <typename myType>
int compute_multiply_accumulate (myType& a) {

  sort ( a.begin(), a.end() );
  cout << "Sorted: ";
  print_contents( a );
  float sum = accumulate(a.begin(), a.end(), 0.0f );
  cout << "Sum: " << sum << endl;
  float product = accumulate ( a.begin(), a.end(), 1.0f, multiplies<float>());
  cout << "Product: "<<product<< endl;
  return 0;
}

int main() {
  std::vector<float> vec{5.2f, 4.0, 3.0f, 2.0, 1.0f};

  print_contents( vec );

  compute_multiply_accumulate ( vec);
  return 0;
}
