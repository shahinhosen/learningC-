#include<iostream>
#include<string>

using namespace std;

class frots {

    public:
    string frotsname;
    string frotscolur;
    int weight;

};


int main (){

    frots object1;

    object1.frotsname= "apple";
    object1.frotscolur="green";
    object1.weight=500;

    frots object2;

    object2.frotsname="banana";
    object2.frotscolur="lightgreen";
    object2.weight=700;

    frots object3;

    object3.frotsname="cherry";
    object3.frotscolur="darkwine";
    object3.weight=800;  

//frist object and his value

    cout<<"frots name is -"<<object1.frotsname<<endl;
    cout<<"frots colur is -"<<object1.frotscolur<<endl;
    cout<<"frots weight is -"<<object1.weight <<"kg"<< "\n \n"<<endl;

//secend object and his value

    cout<<"frots name is -"<<object2.frotsname<<endl;
    cout<<"frots colur is -"<<object2.frotscolur<<endl;
    cout<<"frots weight is -"<<object2.weight<<"kg" << "\n \n"<<endl;

//third object and his value 

    cout<<"frots name is -"<<object3.frotsname<<endl;
    cout<<"frots colur is -"<<object3.frotscolur<<endl;
    cout<<"frots weight is -"<<object3.weight<<"kg"<<endl;

};