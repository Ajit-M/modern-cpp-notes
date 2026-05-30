#include <iostream>

template <typename T>
void printValueAndSize(T var){
  std::cout << "Type is : " << typeid(var).name() << ", Value is : " << var << " , Size in Bytes : " << sizeof(var) << "\n";
}


int main(){
  
  // bool 
  // Anything other than '0' is true 
  bool flag{true};
  printValueAndSize(flag);
  
  // int
  int num{0};
  printValueAndSize(num);

  //float
  float numFloat{2.3f};
  printValueAndSize(numFloat);

  //char
  char ch{'c'};
  printValueAndSize(ch);

  //short
  short numSh{10};
  printValueAndSize(numSh);

  //Long
  long numLong{10};
  printValueAndSize(numLong);

  //Long Long
  long long numLL{100000000000};
  printValueAndSize(numLL);

  //long Double
  long double numLD{100000000000};
  printValueAndSize(numLD);
  
  // Its better to have a scoped enum for avoiding the overlap with other enums
  enum class months {
    Jan,
    Feb,
    March,
    April,
    May,
    June,
    July,
    August,
    Sep,
    Oct,
    Nov,
    Dec

  };

  enum months birthMonth{months::Feb};
  
  std::cout << static_cast<int>(birthMonth) << "\n";

  return 0;
}

