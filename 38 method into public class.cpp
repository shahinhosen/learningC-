#include<iostream>
#include<string>

using namespace std;

class NamesList{
    public:
    void myfuntionandmethod();

}; 



//example of outsider of the function in to class that print a string 
void NamesList::myfuntionandmethod(){
    cout<<"my name is hasan";
};




int main () {

    NamesList nameObject;

    nameObject.myfuntionandmethod();

   
    
};

