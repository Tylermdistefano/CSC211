#include <iostream>
#include <string>
std::string out;
int main(){
std::cin >> out; 
for (int i=0 ; i <out.size() ;i++ ){
if (int(out[0]) == 60){
    out.erase(0,1);
    i = 0;
}
else if (int(out.at(i))== 60){
out.erase(i-1,2);
i = 0;
}
}
std::cout << out << std::endl;
return 0;
}