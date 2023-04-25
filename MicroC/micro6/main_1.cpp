#include<iostream>
#include<string>
#include<vector>

std::vector<std::string> sort(std::vector<std::string> str){ 
    std::string temp;
    for (int i = 0; i < str.size(); i++) {
        for (int j = 0; j < (str.size()-1) ; j++ ) {
            if (str[j] > str[j + 1]) {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

return str;
}
std::string remove_space(std::string hold){
    for (int i = 0; i < hold.size(); i++)
    {
        if (int(hold.at(i)) == 32)
        {
            hold.erase(i, 1);
            i = 0;
        }
    }
    return hold;
}
std::string class_from_names(std::string request){
    int spaceCount = 0;
    std::string fixed;
    for (int i = 0; i < request.size(); i++)
    {
        if (int(request.at(i)) == 32)
        {
            spaceCount ++;
        }
        if(spaceCount >= 2){
        fixed.push_back(request.at(i));
        }
    }
    return fixed;
}
std::vector<std::string> remove_dups(std::vector<std::string> Fclases){
    std::vector<std::string> NFclases;
    int token = 0;
    for (int i = 0 ; i < Fclases.size() ; i++){
        for (int j = 0 ; j < NFclases.size() ; j++ ){
           if (Fclases[i] == NFclases[j]){
              token++;
           }
        }
        if (token == 0){
            NFclases.push_back(Fclases[i]);
        }
        token = 0;
    }

    return NFclases;
}
int num_classes(std::vector<std::string> checked,std::string checker){
    int num = 0;
for(int i = 0 ; i < checked.size(); i++){
    if (checked[i] == checker){
        num++;
    }
}

    return num;
}

int main(){
    std::string lineOne;
    int lines;
    std::cin >>  lines;
    std::getline(std::cin, lineOne);
    std::string request;
    std::vector<std::string> S_clases,names,classes;

for(int i = 0 ; i < lines ; i++){
    std::getline(std::cin, request);
    names.push_back(request);
}
names = remove_dups(names);
for(int i = 0 ; i < names.size() ; i++){
    classes.push_back(remove_space(class_from_names(names[i])));
}
S_clases = remove_dups(classes);
S_clases = sort(S_clases);

for(int i = 0 ; i < S_clases.size() ; i++){
std::cout<< S_clases[i] << " " << num_classes(classes, S_clases[i])<< std::endl;
}

    return 0;
}