#include <iostream>
#include <iomanip>

int main(){
 double x, y;   
std::cin >> x >> y;
//std::cout << ""<< std::endl; refrence
if( x > 0){                 //check x pos
    if( y > 0 ){         //check y pos
        std::cout << "Quadrant 1"<< std::endl;
    
    }
    else if( y == 0){   // y is 0
        std::cout << "No quadrant"<< std::endl;
    }
    
    else{        // y neg
        std::cout << "Quadrant 4"<< std::endl;

    }
}

else if( x== 0 ){
        std::cout << "No quadrant"<< std::endl;
}        // check x 0


else {
    if( y > 0 ){         //check y pos
        std::cout << "Quadrant 2"<< std::endl;
    
    }
    else if( y == 0){   // y is 0
        std::cout << "No quadrant"<< std::endl;
    }
    
    else{        // y neg
        std::cout << "Quadrant 3"<< std::endl;


    }

}              // x neg

return 0;


}