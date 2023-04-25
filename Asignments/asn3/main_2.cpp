#include<iostream>
#include<string>
 
int main(){
std::string word;
std::getline(std::cin, word);
int length = word.length() -1;
for(int i = 0; i < word.length(); i++){
if(int(word[i]) < 91 && int(word[i]) > 64 ){ 
word[i] = int(word[i]) + 32;
}
}


for(int i = 0 ; i < word.length(); i++){

if ( word[length] != word[i]){
    std::cout << "False" << std::endl;
    return 0;
} 
length --;

}
 std::cout << "True" << std::endl;   
 
    return 0;
}