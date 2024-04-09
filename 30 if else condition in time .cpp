#include <iostream>

int main (){

    int i = 2;
    int j = 3;

    int a = 40;
    int b= 30;


    if (i < j ){
    std::cout << "time is small" << std::endl;
    }
    else if (a > b) {                   /// it is no longer print that's for why there have catuch first of if condition 
    std::cout << "time is not small" << std::endl;
    } 
    else { 
        std::cout << " time is very wrong" << std::endl;

    };
};