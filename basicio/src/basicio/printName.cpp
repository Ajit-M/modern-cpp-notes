#include "basicio/printName.h"
#include <iostream>
#include <string>


void printName(){

  std::string name;

  // Reading the input
  std::cout << "Input your Name : " << std::endl;
  std::getline(std::cin, name);

  std::cout << "Your Name is : " << name << std::endl;

}
