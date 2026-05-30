#include <iostream>
#include <array>

int main(){
  
  int a{10}, b{15}, c{20};

  //if-else 
  if( a > b && a > c)
  {
    std::cout << "A is the greatest\n";
  }
  else if (b > a && b > c) 
  {
    std::cout << "B is the greatest\n";
  }
  else
  {
    std::cout << "C is the greatest\n";
  }


  //While Loop
  while ( a > 0 )
  {
    std::cout << "Value : " << a << "\n";
    a--;
  
  }


  //for Loop
  for (auto i = 0; i < 10; i++)
  {
    std::cout << "Iteration : " << i << "\n";

  }
  
  std::array<int ,5> a1 {1,2,3,4,5};
  
  for (auto x: a1)
  {
    std::cout << x << "\n";
  }

  enum class SensorType{
    LiDAR,
    Camera,
    GPS
  };

  // Switch statements
  
 enum SensorType sensor = SensorType::Camera;

  switch(sensor)
  {
    case SensorType::LiDAR:
      std::cout << "Starting LiDAR Based state estimation \n";
      break;

    case SensorType::Camera:
      std::cout << "Starting Camera based state estimation \n";
      break;

    case SensorType::GPS:
      std::cout << "Starting GPS based state estimation\n";
      break;

    default:
      std::cout << "Unknown sensor stopping estimation\n";
      break;
  }
  

}
