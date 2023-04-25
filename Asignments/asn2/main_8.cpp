#include <iostream>
#include <iomanip>
int main(){
int num, direct = 1, loop = 0;
std::cin >> num;
int val = ((num / 2) - 1);
int midN = num - 2; 
if(num % 2 == 0){
std::cout << "Sorry, not odd" << std::endl;
}
else if (num == 1){
std::cout<< "*" << std::endl;
}
else
{
for (int i = 0 ; i < num ; i++){

 switch(direct){                         
   
    case(1): 
    for (int j = 0 ; j < i ; j++){
    std::cout<< " ";
    }  ///// first spaces
    std::cout<< "*";          //first dot
   
    for (int j = 0 ; j < midN ; j++ ){
std::cout << " ";
}                                           // second space
midN = midN - 2;
 
    std::cout<< "*" << std::endl; // last dot
    if (i == (num / 2) - 1 ){
    direct = 2;
    }   
    break;
   
    case(2):
    for ( int k = 0 ; k < num / 2 ; k ++){
     std::cout<< " ";
    }                                            //center dot
    std::cout << "*" << std::endl;
    direct = 3;
    midN = 1;
    
    break;
    case(3):               
for ( int k = 0 ; k < val ; k++){
std::cout << " ";
}
val --;
std::cout<<"*";
 for (int j = 0 ; j < midN ; j++ ){
std::cout << " ";
}                                           // second space
midN = midN + 2;
                                          //after center d

std::cout << "*" << std::endl;
 
 if (val == 0 ){
 break;
 }
 }
 
}
}
 //switch                           
return 0;
}  //
    
