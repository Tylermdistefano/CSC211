#include <iostream>
#include <string>

std::string cut_ends(std::string str){
    int start, end, endamount;
for (int i = 0 ; i < str.size() ; i++ ){
if (str[i] == 47 && str[i+1] == 47 ){
start = i+2;
}
}
str.erase(0,start);
/////////////////////////////////////////////////////////////////////////////////////
for (int i = start ; i < str.size() ; i++ ){                 //end chop off
if (str[i] == 47){
end = i+1;
break;
}
else{
end = i+2;
}
}
//std::cout << str.size() << " string size"<< std::endl;
//std::cout << end << " end"<< std::endl;

endamount = str.size() - end +1;
 //std::cout << endamount << " end amount" << std::endl;
str.erase(end-1,endamount);
/////////////////////////////////////////////////////////////////////////////////////////








return str;
}

int main(){
std::string str = "https://piazza.com";
std::cout << cut_ends(str) << std::endl;
str = "https://www.edx.org/course/programming-in-c-pointers-and-memory-management";
std::cout << cut_ends(str) << std::endl;









    return 0;
}









