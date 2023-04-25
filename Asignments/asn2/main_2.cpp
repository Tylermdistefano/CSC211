#include <iostream>
#include <iomanip>
int main(){
//*
//**
//***
//****
//get the interger
int val;
std::cin >> val;
int count = 1;
int numOspace = val - 1;
for(int i = 0 ; i < val ; i++){

for(int i = 0 ; i < numOspace ; i++){
std::cout << " ";

}
numOspace --;


for(int j = 0 ; j < count ; j++) {
std::cout << "*";

}  
std::cout << std::endl;
count++;

}


}