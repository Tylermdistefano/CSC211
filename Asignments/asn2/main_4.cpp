#include <iostream>
#include <iomanip>
int main(){

long long int val, valO, power;
std::cin >> val >> power;
valO = val;
for(int i = 0 ; i < (power - 1)  ; i++){
val = valO * val;
}
std::cout << val <<std::endl;
return 0;
}