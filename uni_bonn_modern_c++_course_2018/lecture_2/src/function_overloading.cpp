// Copyright: Free
// Author: krsheshu
// Brief: Testing Function Overloading


#include <iostream>
#include <string>
using namespace std;

void Func ( const string& str ) {

  cout << str << " is a string\n";

}

void Func ( const int integer ) {

  cout << integer << " is an integer\n";

}


int main () {

  Func ( "Ananthu" );
  Func ( 10 );

  return 0;
}
