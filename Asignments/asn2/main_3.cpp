#include <iostream>
#include <iomanip>
int main(){

int val, multi;
std::cin >> val;
multi = val;
int answer = 1;
for(int i = 0 ; i < val ; i++){
  answer = multi * answer;
  multi -= 1;
}
if (val >= 19 || answer <= 0 || answer >= 862453760){
std::cout << "Can't handle this"<< std::endl;

}
else{
  std::cout << answer << std::endl;  
}

}