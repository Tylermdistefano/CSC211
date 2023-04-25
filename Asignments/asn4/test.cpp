#include<iostream>
#include<string>
#include<vector>


class Date {
    public:
        int month;
        int year;
        int day;

        void set(int m, int d, int y);
        void print();
};
void Date::print() {
    std::cout << month << '_'
    << day << '_'
    << year << std::endl;
}



int main(){
Date today;
today.day = 11;
today.month = 04;
today.year = 2023;

today.print();
    return 0;
}