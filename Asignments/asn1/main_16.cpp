#include <iostream>
#include <iomanip>
//<input num> degree(s) <input system> is equal to <new num> degree(s) <other system>
int main(){
 double  inTemp, outTemp;
 char unit;  
std::cin >> inTemp >> unit;
if( int(unit) == 70 ){ // F
outTemp = (inTemp - 32) * (5.00000/9.00000) ; // f-c
std::cout <<std::fixed << std::setprecision(4) << inTemp << " degree(s) " << "F" << " is equal to " << outTemp << " degree(s) " << "C" << std::endl;
}
else if ( int(unit) == 67){
outTemp = ((inTemp * ( 1.8 ) ) + 32);// c-f
std::cout <<std::fixed << std::setprecision(4) << inTemp << " degree(s) " << "C" << " is equal to " << outTemp << " degree(s) " << "F" << std::endl;


}

return 0;

}