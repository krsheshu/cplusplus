#include <iostream>
#include <cmath>

int main()
{
std::cout << "Please enter your first name and age\n";
std::string first_name;
// string variable
int age=8;
// integer variable
std::cin >> first_name >> age;
std::cout << "Hello, " << first_name << " (age :" << sqrt(int(age)) << ")\n";
}
