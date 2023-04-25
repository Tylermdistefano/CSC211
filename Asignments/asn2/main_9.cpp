#include <iostream>
int main(){
    int a, b, c;
std::cin >> a >> b >> c;
int lineLength = a;
while (lineLength < b){
for (int i = 0 ; i < lineLength ; i++ ){
std::cout << "+";
}

std::cout << std::endl;
if ((lineLength + c) > b){
goto here;
}
 lineLength += c; 
}

for (int i = 0 ; i < lineLength ; i++ ){
std::cout << "+";
}
std::cout << std::endl;
here:
while (lineLength >= a){
for (int i = 0 ; i < lineLength ; i++ ){
std::cout << "+";
}
 lineLength -=c;
  std::cout << std::endl;
}
    return 0;
}