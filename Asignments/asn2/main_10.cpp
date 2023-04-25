#include <iostream>
int main(){
    double loan, intrest, Mpayment;
    int months = 0;
std::cin >> loan >> intrest >> Mpayment;
while (loan > 0){
loan = ((loan * intrest) + loan);
loan -= Mpayment;
months++;

}
std::cout << months << std::endl;




    return 0;
}