#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int* pointer;
    int* pointer = nullptr;
    int* pointer = &x; // pointer now holds the address of x
    // more on pointers
    int value = 24;
    cout<<value<<endl; // prints 24
    int* pointer2 = &value; // pointer2 now holds the address of value
    cout<<pointer2<<endl; // prints the address of value
    cout<<*pointer2<<endl; // prints the value at the address of pointer2, which is 24, using the dereferencing operator (*)
    cout<<&value<<endl; // prints the address of value
    cout<<*(&value)<<endl; // prints the value at the address of value, which is 24, using the dereferencing operator (*)
    cout<<pointer2<<endl; // prints the address of value

}