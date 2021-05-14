#include <iostream>

// Detect if two integers have opposite signs
// Արդյոք երկու ամբող թվերը նույն նշանն ունեն

bool puzzle(int x, int y)
{
    /*Լրացնել*/
    return false;
}

void test(int x, int y)
{
  std::cout << "f(" << x << ", " << y << ")=" << puzzle(x, y) << std::endl; 
}

int main()
{
  test(4, 5);
  test(-4, 5);
  test(4, -5);
  test(-4, -5);
  test(4, 0);
  test(-4, 0);
  return 0;
}
