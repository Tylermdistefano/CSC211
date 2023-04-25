//Write a program which reads a sequence of 0 < n <= 100 integers as 
//input and prints out the number of occurrences of the first integer in the entire sequence. For 
//example, if the input is 7 1 3 6 7 -10 98 11 7, output should be 3 as 7 occurs 3 times.

////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
#include<vector>
int main(){
int first, value, total = 1;
std::vector<int> nums;
std::cin>>first;
while(std::cin >> value){
nums.push_back(value);
}
for(int i = 0 ; i < nums.size() ; i++){
if (nums[i] == first){
total++;
}

}

std::cout << total << std::endl;
    return 0;
}




