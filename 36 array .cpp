#include <iostream>
#include <string>
using namespace std;



class MyClass{

    public:
    int myclass;
    string mystring;


};



int main (){

    MyClass myclassobject;

    myclassobject.myclass= 300;
    myclassobject.mystring= "shahin hosen";


    cout<< myclassobject.myclass<<endl;
    cout<< myclassobject.mystring;
    return 0;


};
