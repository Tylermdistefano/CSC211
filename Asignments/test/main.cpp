#include"test.h"

int main(){
Date today;
today.day = 11;
today.month = 04;
today.year = 2023;
today.set(04,11,2023); // another way to set values 

today.print();
    return 0;
}