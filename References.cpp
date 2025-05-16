// understanding References
#include<iostream>

using namespace std;

int main() {
    // References
    int a = 5;
    int &b = a; // b is a reference to a
    cout << "a: " << a << endl; // Output: 5
    cout << "b: " << b << endl; // Output: 5
    b = 10; // Changing the value of b changes the value of a
    cout << "a: " << a << endl; // Output: 10
    cout << "b: " << b << endl; // Output: 10


    string Name = "John";

    cout<<&Name;// we are getting the memory address of the variable we are using

    return 0;
}