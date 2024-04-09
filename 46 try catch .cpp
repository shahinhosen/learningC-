#include <iostream>
using namespace std;

int main() {
  try {
    int age = 10;
    if (age > 18) {
      cout << "Access granted - you are old enough.";   //there must be use throw age value for catch intiger print .
    } else {
      throw (age);
    };
  }
  catch (int age) {
    cout << "Access denied - You must be at least 18 years old.\n";
    cout << "Age is: " << age;  
  };

};
