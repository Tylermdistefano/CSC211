#include <iostream>
int main(){
int num,counter = 1,total = 0;
std::cin >> num;
while ( counter < num){

if( (num % counter) == 0){
 total = total + counter;
}

counter++;
}
if (total == num){
std::cout <<"True"<< std::endl;
}
else{
std::cout <<"False"<< std::endl;
}

    return 0;
}