#include <iostream>
#include <iomanip>

int main()
{
int num, check;
std::cin >> num;
check = num % 2;
if(check == 0){
std::cout << num << " is even" << std::endl;
}
else{
std::cout << num << " is odd" << std::endl;
}
return 0;
}