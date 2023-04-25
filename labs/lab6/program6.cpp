#include <iostream>
#include <iomanip>

unsigned int string_len(char str[]){
int num;
int arrSize = sizeof(str)/sizeof(str[0]);
   
    return num;
}
void all_to(char str[], bool caps){
    
if (caps == true ){
for( int i = 0 ; i < string_len(str) ; i++)
str[i] = str[i]-32;
}
else if ( caps == false){
for( int i = 0 ; i < string_len(str) ; i++)
str[i] = str[i]+32;
}

}
int main(){
char myString[] = "hello, world";
all_to(myString, true);
std::cout << myString << std::endl;

    return 0;
}
