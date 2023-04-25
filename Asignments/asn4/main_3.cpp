#include <iostream>
#include <string>
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
bool legal_move(std::string cords){
    if (int(cords.at(0)) < 3 && int(cords.at(0)) >= 0 && int(cords.at(1)) < 3 && int(cords.at(1)) >= 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int locate_zro_R(int arr[][3]){
for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == 0){
              return i;
             
            } 
            
        }
    }
    
} 
int locate_zro_C(int arr[][3]){
for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == 0){
              return j;
             
            } 
            
        }
    }
    
} 
void up(int arr[][3]){ 
   std::string to_check ,zero; 
to_check.push_back(locate_zro_R(arr)-1); //import locate zero as new string
to_check.push_back(locate_zro_C(arr));
int reset_zro_r = locate_zro_R(arr);
int reset_zro_c = locate_zro_C(arr);
if (legal_move(to_check)){
arr[locate_zro_R(arr)][locate_zro_C(arr)] = arr[locate_zro_R(arr)-1][locate_zro_C(arr)];
arr[reset_zro_r-1][reset_zro_c] = 0;
}

}
void left(int arr[][3]){   
     std::string to_check; 
to_check.push_back(locate_zro_R(arr)); //import locate zero as new string
to_check.push_back(locate_zro_C(arr)-1);
int reset_zro_r = locate_zro_R(arr);
int reset_zro_c = locate_zro_C(arr);
if (legal_move(to_check)){
arr[locate_zro_R(arr)][locate_zro_C(arr)] = arr[locate_zro_R(arr)][locate_zro_C(arr)-1];
arr[reset_zro_r][reset_zro_c-1] = 0;
}


}
void right(int arr[][3]){    
    std::string to_check; 
to_check.push_back(locate_zro_R(arr)); //import locate zero as new string
to_check.push_back(locate_zro_C(arr)+1);
int reset_zro_r = locate_zro_R(arr);
int reset_zro_c = locate_zro_C(arr);
if (legal_move(to_check)){
arr[locate_zro_R(arr)][locate_zro_C(arr)] = arr[locate_zro_R(arr)][locate_zro_C(arr)+1];
arr[reset_zro_r][reset_zro_c+1] = 0;
}


}
void down(int arr[][3]){     
     std::string to_check; 
to_check.push_back(locate_zro_R(arr)+1); //import locate zero as new string
to_check.push_back(locate_zro_C(arr));
int reset_zro_r = locate_zro_R(arr);
int reset_zro_c = locate_zro_C(arr);
if (legal_move(to_check)){
arr[locate_zro_R(arr)][locate_zro_C(arr)] = arr[locate_zro_R(arr)+1][locate_zro_C(arr)];
arr[reset_zro_r+1][reset_zro_c] = 0;
}

}
bool final_check(int arr[][3]){
    int checker[3][3]={1,2,3,4,5,6,7,8,0};
    int token = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == checker[i][j])
            {
                token++;
        
            }
           
        }
    }
    if (token == 9)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    std::string moves, numbers;
    int board[3][3], count = 0;
    std::getline(std::cin, numbers);
    std::getline(std::cin, moves);
    numbers = remove_space(numbers);
    moves = remove_space(moves);
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = numbers[count]-48;
            count++;
        }
    }
    for (int i = 0; i < moves.size(); i++)
    {


        if (int (moves.at(i)) == 85)
        {
            up(board);
            
        }
        if (int (moves.at(i)) == 68)
        { 
            down(board);
        }
        if (int (moves.at(i)) == 76)
        {
            left(board);
        }
        if (int (moves.at(i)) == 82)
        {
            right(board);
        }
    
    

    }

    if (final_check(board) == 1)
    {
        std::cout << "Solution is good!" << std::endl;
    }
    else
    {
        std::cout << "Wrong solution!" << std::endl;
    }

    return 0;
}