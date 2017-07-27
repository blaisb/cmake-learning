// A simple program that computes the square root of a number
#include <iostream>
#include "add.h"

int main (int argc, char *argv[])
{
  int a = 0;
  int b = 0;
  std::cout << "Give two input values?" << std::endl;
  std::cin >> a >> b ; 
  
  std::cout << a << " + " << b << " = " << add(a,b) << std::endl;
  return 0;
}
