#include<iostream>
#include<vector>

int main(){
int value, hold;
std::vector<int> nums;
while(std::cin >> value){
nums.push_back(value);
}
hold = nums[0];
for (int i = 0 ; i < nums.size(); i++){


if (nums[i] > hold){
std::cout << "Not Sorted" << std::endl;
return 0;
}
else{
    hold = nums[i];
}
}
std::cout << "Sorted" << std::endl;
return 0;
}

