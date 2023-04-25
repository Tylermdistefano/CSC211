#include<iostream>
#include<string>

int main(){
std::string sentince;
std::getline(std::cin, sentince);
for (int i = 0 ; i < sentince.size() ; i++){
for (int j = i+1 ; j < sentince.size() ; j++){
if (sentince[i]==sentince[j]){
    sentince.erase(j,1);
    j= i;
}
}
}
std::cout << sentince.size() << std::endl;
return 0;
}