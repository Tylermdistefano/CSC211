#include <iostream>    
int convert(int num){
int hold;
hold = num % 16;
if(hold < 10){
hold += 48;
}
  else{
  hold += 55;  
  }
return hold;
}

int main () {
    int ia,ib,ic;
  char a,b,c,aa,cc,bb;
  std::cin >> ia >> ib >> ic;
  int num = ia;
a = convert(num);
num /= 16;
aa = convert(num);
num = ib;
b = convert(num);
num /= 16;
bb = convert(num);
num = ic;
c = convert(num);
num /= 16;
cc = convert(num);
std::cout << "#" << aa << a << bb << b << cc << c << std::endl;
  
  return 0;
}

