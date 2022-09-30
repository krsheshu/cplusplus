// Copyright: Free
// Author: krsheshu
// Brief: Testing functions with default arguments

#include <iostream>
#include <vector>
using namespace std;

vector<int> createVectorOfFullSquares ( const int size = 5 ) {

  vector<int> squares ( size );
  for ( int i = 0; i < size; i++ )
    squares[i] = i*i;
  return squares;
}


int main() {

  auto squares = createVectorOfFullSquares ( );

  for ( auto &i: squares )
    cout << i << ' ' ;

  cout<<endl;

  squares = createVectorOfFullSquares ( 10 );

  for ( auto &i: squares )
    cout << i << ' ' ;
  return 0;
}
