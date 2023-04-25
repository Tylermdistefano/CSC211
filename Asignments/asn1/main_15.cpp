#include <iostream>
#include <iomanip>

int main(){
 double tempF, tempC;   
std::cin >> tempC;


tempF = (tempC * ( 1.8 ) ) + 32;


if ( tempF <= 32 ){
    std::cout << "It is cold out" << std::endl;

}
else if ( (tempF > 32) && (tempF <= 65) ){
    std::cout << "Wear a jacket" << std::endl;

}
else{
std::cout << "It is nice out" << std::endl;

}
return 0;


}