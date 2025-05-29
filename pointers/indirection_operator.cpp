//code demonstrating thr indriection operator

#include <iostream>
using namespace std;


int main (){
// observ the following code:
int num = 10;

int* ptr = nullptr;

ptr = &num;

cout<<"The value of num is: "<< num<<endl;
cout<<"The address of num is: "<< &num <<endl;
cout<<"The value of ptr is: "<< ptr <<endl;
cout<<"The value pointed to by ptr is: "<< *ptr <<endl;
// we can mulatple the valie of the pointer using the opration below:

*ptr = 100;
cout<<"The value of num after changing the value pointed to by ptr is: "<< num <<endl;
cout<<"The value pointed to by ptr after changing the value pointed to by ptr is: "<< *ptr <<endl;
// the power of dynamic allocation of memory using pointers

// more cde sgemnets explain the concept
string food = "Pizza";  // A food variable of type string
string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

// Output the value of food (Pizza)
cout << food << "\n";

// Output the memory address of food (0x6dfed4)
cout << &food << "\n";

// Output the memory address of food with the pointer (0x6dfed4)
cout << ptr << "\n";








    return 0;
}