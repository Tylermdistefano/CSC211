#include <iostream>
#include <iomanip>
int main(){
int val, devide, token = 0;
std::cin >> val;
devide = val;
int answer = 1;
for(int i = 0 ; i < val ; i++){
  answer = val % devide;
  devide -= 1;
  if (answer == 0){
token++;
}
}

if(token >= 3 | val == 1){
std::cout << "False" << std::endl;
}
else
{
std::cout << "True" << std::endl; 
}
return 0;
}