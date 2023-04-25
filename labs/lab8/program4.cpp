//Program 4. Write a recursive function in C++ to return the sum of all value from 1 to a 
//given number. It should have the following header unsigned int sum(int n);.
#include <iostream>
int sum(int n) {
  if (n > 0) {
    return n + sum(n - 1);
  } else {
    return 0;
  }
}

int main(){
std::cout << sum(4) << std::endl;
return 0;
}