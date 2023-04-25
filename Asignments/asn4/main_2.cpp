#include <iostream>
#include <string>

bool alive(std::string bord, int spot)
{ // checks if a spot is alive or dead
    if (bord[spot] == 42)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int alive_around(std::string board, int colm, int rows, int pos)
{ // takes the board length, # of colmn and the board positon returns # of alive around it
    int curent_row = ((pos / colm) + 1);
    int pre_row_low = (((curent_row - 1) * colm) - colm);
    int pre_row_high = (((curent_row - 1) * colm) - 1);
    int row_low = (((curent_row)*colm) - colm);
    int row_high = (((curent_row)*colm) - 1);
    int post_row_low = (((curent_row + 1) * colm) - colm);
    int post_row_high = (((curent_row + 1) * colm) - 1);
    int spot_locs[8] = {(pos - (colm + 1)), (pos - (colm)), (pos - (colm - 1)), (pos - 1), (pos + 1), (pos + (colm - 1)), (pos + colm), (pos + (colm + 1))};
    int total = 0;
    if (spot_locs[0] >= pre_row_low && curent_row - 1 > 0 && alive(board, spot_locs[0]))
    {
        total++;
    } //    up left
    if (spot_locs[1] >= 0 && alive(board, spot_locs[1]))
    {
        total++;
    } // up

    if (spot_locs[2] <= pre_row_high && curent_row - 1 > 0 && alive(board, spot_locs[2]))
    {
        total++;
    } // up right

    if (spot_locs[3] >= row_low && alive(board, spot_locs[3]))
    {
        total++;
    } // left

    if (spot_locs[4] <= row_high && curent_row > 0 && alive(board, spot_locs[4]))
    {
        total++;
    } // right

    if (spot_locs[5] >= post_row_low && curent_row + 1 <= rows && alive(board, spot_locs[5]))
    {
        total++;
    } // down left

    if (spot_locs[6] <= board.size() && alive(board, spot_locs[6]))
    {
        total++;
    } // down

    if (spot_locs[7] <= post_row_high && curent_row + 1 <= rows && alive(board, spot_locs[7]))
    {
        total++;
    } // down right

    return total;
}

char cell_god(int pop, bool alive)
{ // takes in suround pop and alive/dead applies rules returns alive=='*' or dead=='.'
    if (alive)
    {
        if (pop < 2 || pop > 3)
        {
            return '.';
        }
        if (pop == 2 || pop == 3)
        {
            return '*';
        }
    }
    else
    {
        if (pop == 3)
        {
            return '*';
        }
        else
        {
            return '.';
        }
    }
    return '@';
}

int main()
{
    ///////////////////////////////////////////////////////////
    std::string board = {}, holdboard = {};
    int row, colm, gen;
    char num;
    std::cin >> row >> colm >> gen;
    int size = row * colm;
    for (int i = 0; i < size; i++)
    { // collect
        std::cin >> num;
        board.push_back(num);
    }

    /////////////////////////////////////////////////////////////
    for (int g = 0; g < gen; g++)
    {
        for (int i = 0; i < size; i++)
        { // asn to temp hold
            num = cell_god(alive_around(board, colm, row, i), alive(board, i));
            holdboard.push_back(num);
        }
        board.clear();
        for (int i = 0; i < size; i++)
        { // asn back to board
            num = holdboard.at(i);
            board.push_back(num);
        }
        holdboard.clear();
    }

    /////////////////////////////////////////////////////////////////////////////////
    int count = 0;
    // std::cout << "/////////////////////////// final" << std::endl;
    // std::cout << board.size()<< std::endl;
    while (count != (row * colm))
    {

        std::cout << board.at(count);
        count++;

        if ((count % colm) == 0)
        {
            std::cout << std::endl;
        }
        else
        {
            std::cout << " ";
        }
    }
    return 0;
}

// std::cout << board.at(((i*j)-1)) << " ";