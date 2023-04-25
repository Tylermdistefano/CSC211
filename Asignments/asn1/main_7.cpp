#include <iostream>
#include <iomanip>

int main(){
 int num;   
std::cin >> num;
if (num > 100 && (num % 8) == 0){
    std::cout << num << " satisfies the criteria" << std::endl;

}

else{
std::cout << num << " does not satisfy the criteria" << std::endl;

} 

return 0;


}