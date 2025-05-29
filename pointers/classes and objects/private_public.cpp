//i  imeplemting the public and private keywords in c++
#include<iostream>

using namespace std;
// defining the class outsie the main function as follows
class MyClass{
    private:
         int priavtevar;
         int myFunction(){/*-----*/};// only accessible within the class
    public:
         int publicvar;
         int publicFunction(){/*-----*/};// accessible from outside the class
}; // semicolon should be at the end of the class definition


int main (){

// testing the blobk of the code imeplementied int he section to bobation as wise
cout<<"Hello, this code is working!!!";


    return 45;
}