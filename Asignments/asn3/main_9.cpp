#include <iostream>
#include <string>

std::string dotRemove(std::string str){
int j = 0;
while( str[j] != 64){
    j++;
}

for(int i = 0 ; i < j; i++){
if(str[i] == 46){

str.erase(i,1);
i=0;
j--;
}
}
return str;
}
std::string plusafter(std::string str){
for (int i = 0; i < str.length() ; i++) {
if (str[i] == 43) {
while (str[i] != 64) {
str.erase(i, 1);
}
//break;
}
}
return str;
}
std::string convert_low(std::string str){
for(int i = 0; i < str.length(); i++){
if(int(str[i]) < 91 && int(str[i]) > 64 ){ 
str[i] += 32;
}
}
return str;
}

int main(){
std::string email1, email2;
std::cin >>email1 >>email2;
email1 = plusafter(dotRemove(convert_low(email1)));
email2 = plusafter(dotRemove(convert_low(email2)));

 if (email1.compare(email2) == 0) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
}

//comp++++++..@gmail.com COMp+123+123@gmail.com