//for (<declarative part> ; <conditional> ; <step>) {
    //statements
//}
//program1.cpp. Implement a program to get a number from the user and print out all numbers up to the given input value with a for loop.
#include <iostream>
#include <iomanip>

int main(){
int num;
std::cin >> num ;

for( int i = 0 ; i <= num ; i++ ){

std::cout << i  << std::endl;

}

    return 0;
}

