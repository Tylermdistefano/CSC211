#include <iostream>
#include <iomanip>

int main(){
int smallNum[3];
for(int i = 0; i < 3 ; i++) {
  std::cin >> smallNum[i];

}
int testNum  = smallNum[0];


for(int i = 0; i < 3 ; i++){

if(testNum > smallNum[i]){
 testNum = smallNum[i];
}

}
std::cout << "The smallest number entered was " << testNum << std::endl;
return 0 ;
}
