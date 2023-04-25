#include <iostream>
#include <string>

std::string convert_low(std::string str){
for(int i = 0; i < str.length(); i++){
if(int(str[i]) < 91 && int(str[i]) > 64 ){ 
str[i] += 32;
}
}
return str;
}

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
if (str[i] == 47 || str[i] == 58 ||str[i] == 63 ||str[i] == 35){
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
std::string url;
std::getline(std::cin, url);

 
std::cout << convert_low(cut_ends(url)) << std::endl;
return 0;
}



