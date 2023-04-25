#include <iostream>
int main (){
char letter;
int asciV, rows, spaces ,Linc=65, charAm;
std::cin >> letter;
asciV = int(letter);
rows = asciV - 64;
spaces = rows - 1;
charAm = 0;

for(int i = 0 ; i < rows ; i++){   /////rows
Linc=65;
for(int i = 0 ; i < spaces ; i++){   /////spaces
std::cout << "  ";
}
spaces -= 1;
if (i == 0){                       //the first A
    std::cout << "A" << std::endl;   //the first A 
}


for(int j = 0 ; j < (charAm)  ; j++){    ///// letters down
std::cout << char(Linc) << " " ;
Linc += 1;
}
charAm += 1;
if (i > 0){
    std::cout << char(Linc) << " ";
for (int k = 0 ; k < (charAm - 2) ; k++){
Linc -=1;
std::cout << char(Linc) << " ";
}
std::cout << "A" << std::endl;
}

}
    return 0;
}