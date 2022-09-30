// Copyright: Free
// Author: krsheshu
// Brief:

#include <iostream>
#include <vector>
using namespace std;

vector<int> createVectorOfFullSquares ( const int size ) {

  vector<int> squares ( size );
  for ( int i = 0; i < size; i++ )
    squares[i] = i*i;
  return squares;
}


int main() {

  auto squares = createVectorOfFullSquares ( 10 );

  for ( auto &i: squares )
    cout << i << ' ' ;

  return 0;
}
