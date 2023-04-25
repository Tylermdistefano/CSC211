#include <iostream>
#include <iomanip>  
int amntOnum(unsigned long int num){
    unsigned long int token = 0;                              //get amont of digets
while (num > 1){                                //check what digets are even
num = num / 10;                                 //add thoes digits
token ++;
}
return token;
}

int amntOnumE(unsigned long int num){
    int token = 0;                              //get amont of digets
while (num > 1){
if (((num % 10 ) % 2) == 0 && num > 0){
token ++;
}                    //check what digets are even
num = num / 10;                                 //add thoes digits
}
return token;
}



int main(){
    
    unsigned long int counter = 0, spots,asn = 0, spotsE, hold;
    unsigned long int num;
    std::cin >> num;
    hold = num;
    spots = amntOnum(num);
//std::cout << hold << "num" << std::endl;
    spotsE = amntOnumE(num);
//std::cout << hold << "num" << std::endl;
    int storeE[spotsE];
//std::cout << spots << " total amount of digets" << std::endl;
//std::cout << spotsE << " total amount of even digets" << std::endl;
    for (int i = 0 ; i < spots ; i++ )
    {
       //std::cout << num << "num" << std::endl;
       if (((num % 10 ) % 2) == 0){
        storeE[asn] = num % 10;
        //std::cout << num % 10 << " number to be stored" << std::endl;
        num = num / 10;
        asn++;
       }
        else {
            num = num / 10;
        }
    }
int total = 0;

for (int j = 0 ; j < spotsE; j++ ){
total = storeE[j] + total;
//std::cout <<  storeE[j] << " even number to be added" << std::endl;
//std::cout << total << " total of even numbers" << std::endl;
}
std::cout << total << std::endl;
return 0;
}