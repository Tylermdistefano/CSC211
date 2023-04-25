#include<iostream>
#include<string>

int main(){
    int total = 0;
std::string string;
std::getline(std::cin, string);

for (int i = 0 ; i < string.size(); i++){
total = total + string[i];

}
std::cout << total << std::endl;

return 0;
}