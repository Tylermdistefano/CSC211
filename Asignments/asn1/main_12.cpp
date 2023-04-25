#include <iostream>
#include <iomanip>

int main(){
 double a, b, c, ans;   
std::cin >> a >> b >> c;
ans = (a + b + c) / 3;
std::cout << std::fixed << std::setprecision(4) << "The average of " << a << ", " << b << ", and " << c << " is " << ans << std::endl;
return 0;


}