#include <iostream>
int amntOnum(int num){
    int token = 0;                              //get amont of digets
while (num >= 1){                                //check what digets are even
num = num / 10;                                 //add thoes digits
token ++;
}
return token;
}
int main(){
    int num,Nnum, digets, dig = 0, total = 0, idk;
std::cin >> num;
Nnum = num;
digets = amntOnum(num);
for(int i = 0 ; i < digets ; i++){
dig = Nnum % 10; 
idk = dig;
for(int i = 0 ; i < (digets -1) ; i++){
dig = dig * idk;
}

total = total + dig;
Nnum /=10;
}
if (total == num){
std::cout <<"True"<< std::endl;
}
else{
std::cout <<"False"<< std::endl;
}


return 0;
}




