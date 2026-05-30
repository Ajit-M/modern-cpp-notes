#include <iostream>

int main(){
  
  //Uninitialized -> Undertemined value
  int num;

  //Copy Initliazation -> A temp variable is created with the value of 20 and the value
  //is moved to the num1 variable
  int num1 = 20;
  
  //Braces for initialzation avoid the implicit narrowing conversions
  int pi_int = 3.14; // Will be truncated
  //int pi_int{3.14} will throw an error

  int num2{10}; // Morden standard of initializing the variables
  int num3{}; // Default value initialization

  
  std::cout << "Uninitialized : " << num << "\n";
  std::cout << "Narrowing Conversion to Int from Float : " << pi_int << "\n";
  std::cout << "Modern Initialization Method : " << num2 << "\n";
  std::cout << "Modern Initialization Default : " << num3 << "\n";
}
