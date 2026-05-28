
#include <iostream>

struct Point{
  int x;
  int y;
  
  Point(int _x, int _y) : x{_x}, y{_y}{
      
  }

};

typedef Point pt;

void setValue(int *p){
    *p = 10;
}


int main()
{
    // std::cout<<"Hello World";
    double a{10000};
    Point vec{10,20};
    pt vec2{1,2};
    
    int value{20};
    int *p{&value};

    void (&setValueRef)(int *p) = setValue;
    
    std::cout << *p << std::endl;
    
    setValueRef(p);
    
    std::cout << *p << std::endl;
    
    
    std::cout << vec.x << ":" << vec.y << std::endl;
    std::cout << vec2.x << ":" << vec2.y << std::endl;
    std::cout << sizeof(vec2) << std::endl;

    return 


}
