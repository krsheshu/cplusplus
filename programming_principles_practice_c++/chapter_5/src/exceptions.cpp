#include <iostream>


class Bad_area{};

int area(int length, int breadth )
{

  if ( length <= 0 || breadth <= 0 )
    throw Bad_area{};

  return length*breadth;

}


int main()
{

  try {

    int x=-1,y=2,z=4;
    std::cout<<x<<y<<z<<std::endl;
    int area1 = area(x,y);
    std::cout<<area1<<std::endl;
    int area2 = area(y,z);
    std::cout<<area2<<std::endl;
    double ratio = area1/area2;

  }

  catch( Bad_area ) {
    std::cout<<"Oops! bad arguments to area()\n";

  }


}
