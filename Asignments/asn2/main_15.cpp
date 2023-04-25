#include <iostream>
int main(){
int num,counter = 1,total = 0, step=1, spaces, dots;
std::cin >> num;
//////////////////////////////////////////////////
std::cout << "#";
for ( int i = 0 ; i < num*4 ;i++){
std::cout << "=";
}
std::cout << "#" << std::endl;
///////////////////////////////////////////////////
spaces = (num-1)*2;
dots = 0; 
for ( int i = 0 ; i < num*2 ;i++){
std::cout << "|";
for ( int j = 0 ; j < spaces ; j++){                  ////spaces
std::cout << " ";
}                                        
std::cout << "<>";
for ( int j = 0 ; j < dots ; j++){                  ////dots
std::cout << ".";
} 
std::cout << "<>";
for ( int j = 0 ; j < spaces ; j++){                  ////spaces
std::cout << " ";
}  
if (i < num-1){ 
spaces = spaces - 2;
dots = dots + 4;
}
if (i > num-1){ 
spaces = spaces + 2;
dots = dots -4;
}
std::cout << "|" << std::endl;
}
///////////////////////////////////////////////////
std::cout << "#";
for ( int i = 0 ; i < num*4 ;i++){
std::cout << "=";
}
std::cout << "#" << std::endl;
return 0;
}