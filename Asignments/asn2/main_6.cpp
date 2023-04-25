#include <iostream>
#include <iomanip>

int main(){
int limit, amount, total;
std::cin >> limit >> amount;
for (int i = 0 ; i < amount ;i++){
total = limit + total;
limit -= 1;
//std::cout << total << "total"<< std::endl;
//std::cout << limit << "limit" << std::endl;

}
std::cout << total << std::endl;
    
    return 0;
}