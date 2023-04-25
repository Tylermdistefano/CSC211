#include"test.h" // links to header file which stores the class date
#include<iostream>





void Date::print() {
    std::cout << month << '_'
    << day << '_'
    << year << std::endl;
}


void Date::set(int m,int d, int y){
    month = m;
    day = d;
    year = y;
}