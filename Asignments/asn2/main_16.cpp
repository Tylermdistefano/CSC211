#include <iostream>
#include <iomanip>
int prime(int val){
int devide, token = 0;
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
return 0;
}
else
{
return 1; 
}
}
int amntOnum(int num){
    int token = 0;                              //get amont of digets
while (num >= 1){                                //check what digets are even
num = num / 10;                                 //add thoes digits
token ++;
}
return token;
}
int rotate(int N){
int next, toadd, front, power = 1, Nfront;
toadd = N / 10;
front = N % 10;
for (int i = 0; i < (amntOnum(N)-1) ; i++ ){
power = power * 10;
}
Nfront= power * front;
next = Nfront + toadd;
    return next;
}
int main(){
   int repeat, total = 0, num, val;
std::cin >> num;
val = num;
repeat = amntOnum(num);
for (int i = 0 ; i < repeat ; i++){
total = prime(num) + total;
num = rotate(num);
//std::cout << rotate(num) <<"rotate" << std::endl;
}
if (total == amntOnum(val)){
std::cout << "True" << std::endl;
}
else{
std::cout << "False" << std::endl;
}
    return 0;
}