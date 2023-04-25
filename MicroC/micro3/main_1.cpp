#include <iostream>
#include <iomanip>
#include <math.h>

//calculating the length of two vectors, and then computing their normalized dot product and outputting if the angle between the vectors is acute, obtuse, or perpendicular. If the dot product of two vectors is 0, 
//it means they are perpendicular. If their dot product is greater than 0, 
//it means the angle between them is acute. If their dot product 
//is less than 0, it means they are obtuse.





int main(){

long double X1, Y1, X2, Y2, A, B, C, D;

std::cin >> X1 >> Y1 >> X2 >> Y2;


long double V1 = sqrt(X1 * X1 + Y1 * Y1);
long double V2 = sqrt(X2 * X2 + Y2 * Y2);
A = X1 / V1;
B = Y1 / V1;
C = X2 / V2;
D = Y2 / V2;
//std::cout << V1 << std::endl;
//std::cout << V2 << std::endl;
//std::cout << A << std::endl;
//std::cout << B << std::endl;
//std::cout << C << std::endl;
//std::cout << D << std::endl;
double dotProduct = (((A) * (C)) + ((B) * (D)));
//std::cout << dotProduct << std::endl;

std::cout << std::fixed << std::setprecision(4) << "Length of v1: " << V1 << std::endl;
std::cout << std::fixed << std::setprecision(4) << "Length of v2: " << V2 << std::endl;
std::cout << std::fixed << std::setprecision(4) << "Their normalized dot product is " << dotProduct << " and they are ";

if ( dotProduct == 0 ){

std::cout << "Perpendicular" << std::endl;

}

else if(dotProduct < 0){

std::cout << "Obtuse" << std::endl;


}
else if (dotProduct > 0)
{

std::cout << "Acute" << std::endl;


}
    
    
    return 0;
}