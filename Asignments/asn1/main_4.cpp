#include <iostream>
#include <iomanip>

int main()
{
int a,b,c;
char d;
std::cin >> a >> b >> d;

switch (int(d)) {
  case 47:// /
    c = a / b;
std::cout << a << " / " << b << " = " << c << std::endl;
    break;
  case 45: //- 
    c = a - b;
std::cout << a << " - " << b << " = " << c << std::endl;
    break;
  case 43:  //+
    c = a + b;
std::cout << a << " + " << b << " = " << c << std::endl; 
    break;
  case 42:  // *
    c = a * b;
std::cout << a << " * " << b << " = " << c << std::endl;
    break;
}

return 0;
}