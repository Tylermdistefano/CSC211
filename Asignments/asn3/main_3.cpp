#include<iostream>
#include<string>

int main(){
std::string word;
std::getline(std::cin, word);
for(int i = word.length()-1; i >= 0; i--){
std::cout << word[i];
}
std::cout << std::endl;
return 0;
}
