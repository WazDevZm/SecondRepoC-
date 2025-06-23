#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int* pointer = nullptr;
    pointer = &x; // pointer now holds the address of x
    // more on pointers
    int value = 24;
    cout<<value<<endl; // prints 24
    int* pointer2 = &value; // pointer2 now holds the address of value
    cout<<pointer2<<endl; // prints the address of value
    cout<<*pointer2<<endl; // prints the value at the address of pointer2, which is 24, using the dereferencing operator (*)
    cout<<&value<<endl; // prints the address of value
    cout<<*(&value)<<endl; // prints the value at the address of value, which is 24, using the dereferencing operator (*)
    cout<<pointer2<<endl; // prints the address of value
  // pitter type should also match reference typw when used
    int a = 13;
    double b = 34.5;

    int* pointer3 = &a; // pointer3 holds the address of a
    double* pointer4 = &b; // pointer4 holds the address of b
    cout<<pointer3<<endl;
    cout<<*pointer3<<endl;
    // assignmet of pointers and how they are used

    int val = 56;
    int* pointer5 = &val;
    cout<<val;
    cout<<*pointer5<<endl; // prints the value at the address of pointer5, which is 56

    int val1 = 67;
    pointer5 = &val;
    cout<<val1<<endl;
    cout<<*pointer5<<endl;

    // Now let’s look at how we can also use a pointer to change the value being pointed at:


    return 56;

}