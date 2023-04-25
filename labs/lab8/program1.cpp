#include <iostream>
#include <iomanip>

int fib(int number){
if (number == 0 || number == 1){
    return number;
}
else{
  return fib(number - 1) + fib(number - 2);
}

}

int main(){
std::cout << fib(6) << std::endl;
    return 0;
}