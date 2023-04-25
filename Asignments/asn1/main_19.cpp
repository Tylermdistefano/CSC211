#include <iostream>
#include <iomanip>

int main(){
int a, b, c;
std::cin >> a >> b >> c;
if ((a == 90 || b == 90 || c == 90)){
std::cout << "Right" << std::endl;
}

else if ( a > 90 || b > 90 || c > 90 && (a + b + c) == 180 ){
std::cout << "Obtuse" << std::endl;
}
else if( a + b + c != 180){
    std::cout << "This triangle is impossible" << std::endl;
}
else{
    std::cout << "Acute" << std::endl;
}






















}