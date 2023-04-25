// !!!!!!!!!!!!!!
// \\!!!!!!!!!!//
// \\\\!!!!!!////
// \\\\\\!!//////
//      4x14




#include <iostream>
#include <iomanip>

int main(){
int num;
int a = 14;
int dashF = 0, dashL = 0;
for( int i = 0 ; i < 4 ; i++ ){

    for(int c = 0 ; c > dashF ; c++){ 
           std::cout << "s";

    }
    
    
    
    for( int n = 0 ; n < a ; n++ ){
std::cout << "!";
    dashF += 2;
}

std::cout << std::endl;


}

    return 0;
}