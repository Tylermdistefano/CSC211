#include <iostream>
#include <iomanip>

int main(){
 char input;   
std::cin >> input; 

if (int(input) == 65 || int(input) == 97){
std::cout << "Excellent" << std::endl;
}

else if (int(input) == 66 || int(input) == 98){
std::cout << "Good" << std::endl;
}

else if (int(input) == 67 || int(input) == 99){
std::cout << "Average" << std::endl;
}

else if(int(input) == 68 || int(input) == 100){
std::cout << "Poor" << std::endl;
}
else if(int(input) == 70 || int(input) == 102){
std::cout << "Failing" << std::endl;
}


return 0;
}