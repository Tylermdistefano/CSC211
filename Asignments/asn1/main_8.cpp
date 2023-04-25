#include <iostream>
#include <iomanip>

int main(){
 int num;
std::cin >> num;

if ( (num > 0) && (( ( num - 9 ) % 10 ) == 0) || (num < 0) && ( ( num + 9 ) % 10 ) == 0  ){
    std::cout << num << " is good" << std::endl;

}

else{
std::cout << num << " is no good" << std::endl;

} ;

return 0;


}