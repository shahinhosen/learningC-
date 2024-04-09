/*switch case break in result system*/

#include<iostream>

int main (){
    int input = 70 ;
    switch (input){
        case 80:
        std::cout <<"result is A+ plus"  << std::endl;
        break;
        case 70:
        std::cout <<"result is A- minus" << std::endl;
        break;
        default :
        std::cout <<"result is failed" << std::endl;
    };
};