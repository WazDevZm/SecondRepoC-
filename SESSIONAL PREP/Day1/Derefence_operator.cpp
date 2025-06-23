#include<iostream>
using namespace std;
// Dereference operator (*) is used to access the value at the address stored in a pointer.
int main(){
    int x = 10;
    cout<<x<<endl;
    cout<<&x<<endl; // prints the address of x
    // using the dereference operator
    cout<<*(&x)<<endl; // prints the value at the address of x, which is 10

    return 4;
}