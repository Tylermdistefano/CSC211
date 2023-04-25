//program2.cpp. Implement an algorithm using C++ to detect a speeding car, given that the speed limit is 50 mph. 
//This algorithm should have three possible outputs, "Safe" for any speed below the limit, 
//"Pushing your luck" for any speed in the range [50-55]mph, and "Speeding" for any speed greater than 55.


#include <iostream>
int speed;
int main() {
std::cin >> speed;


if (speed < 50){
std::cout << "Safe" << std::endl;
}


if (speed >= 50 && speed <= 55){
std::cout << "Pushing your luck" << std::endl;
}


if (speed >60){
std::cout << "Speeding" << std::endl;
}


return 0 ;
}