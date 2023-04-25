#include <iostream>
#include <iomanip>
//     5 5 50 50 70 80 100 7 100 95 90 80 70 60 50 3 70 90 80 3 70 90 81 9 100 99 98 97 96 95 94 93 91

int main(){
int R, C;
std::cin >> R;
double answer[R];
for (int i = 0 ; i < R ; i++)
{
int total = 0, avj = 0;
double top = 0;
std::cin >> C ;                //sets varibles and then takes the first number in the list the creates a array with it
int collum[C];
for(int i = 0 ; i < C ; i++){
int adder;                        // this loop clears the adder then takes the next C amount of values and finds the sum
std::cin >> adder;                //as well as takes the numbers and puts them into array collum
collum[i] = adder;
total = total + adder;
}
avj = total / C;
for(int i = 0 ; i < C ; i++){
if ( collum[i] > avj ){
top ++;
}
}
answer[i] = (top / C) * 100;
}

for (int i = 0; i < R; i++) {
        std::cout << std::fixed << std::setprecision(3) << answer[i] << "%" << std::endl;
    }
    return 0;
}
