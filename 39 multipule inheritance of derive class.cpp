/*

Multiple inheritance a onak gola class 
ak satay int main () ar modday ak line print korano jai 
but Polymorphism ba 1ta base class ar multipule derive class
a ak line a print korano jai na .

*/

#include<iostream>
#include<string>

using namespace std ;

class mainclass{

    public:
    void parentfuntion (){
        cout<<"printing parrent function"
        ;
    };

};


class chidone:public mainclass {
    void childonefunction(){
        cout<<"printing childone function";
    };

};

class chiltwo:public chidone{
    void chidtwofuntion(){
        cout << "printing childtwo funtion";
    };

};


int main (){
    chiltwo myallobjects;
    myallobjects.parentfuntion();

};