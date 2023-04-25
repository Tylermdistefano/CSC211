#include<iostream>
#include<string>

int main(){
std::string word;
std::getline(std::cin, word);


for(int i = 0 ; i < word.length(); i++){

if(word[i]== word[i-1]){
    word.erase (i-1,1);
    i = 0;
}

}
 std::cout<< word << std::endl; 
 
    return 0;
}

