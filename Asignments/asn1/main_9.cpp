#include <iostream>
#include <iomanip>

int main(){
 int num;   
std::cin >> num;

if ( num < 16 ){
    std::cout << "Too young" << std::endl;

}
else if ( num >= 16 && num < 18 ){
    std::cout << "Can drive" << std::endl;

}

else if( num >= 18 && num < 21 ){
std::cout << "Can join the military" << std::endl;

} 
else{
std::cout << "Can have a beer" << std::endl;

}
return 0;


}