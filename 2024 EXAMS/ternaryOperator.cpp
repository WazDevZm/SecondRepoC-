// using the ternary operator in C++
#include <iostream>
using namespace std;



int main(){
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    // using the ternary operator
    int max = (a > b) ? a : b; // if a is greater than b, assign a to max, otherwise assign b to max
    cout<<"The maximum number is: "<<max<<endl;
    return 0;
}//