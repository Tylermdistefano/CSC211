//6. Write a program that will store 3 exam grades 
//for 4 students as amultidimensional array, and a function to calculate the average 
//for each student, and another function to calculate the average for each exam.
#include <iostream>
int testavj(int num){
    int avj = 0 ,grades[3];
for(int i = 0 ; i < 4 ; i++){
grades[i] += avj;
avj /=4;
}
return avj;
}
int studentavj(int num){
    int avj = 0 ,grades[3];
for(int i = 0 ; i < 3 ; i++){
grades[i] += avj;
avj /=3;
}
return avj;
}
int main(){
int type, answer,num;
int grades[3][2];
std::cin >> type >> num;
switch (type){
case(0):
answer = testavj(num);
std::cout << answer << "test avj" << std::endl;
break;
case(1):
answer = studentavj(num);
std::cout << answer << "Student avj" << std::endl;
break;
}

    return 0;
}