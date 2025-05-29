#include<iostream>
#include<string>

using namespace std;


int main (){

    int *ptr = nullptr;
    int num = 10;

    ptr = &num;
    // symbolic name ptr is a pointer that holds the address of num


    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    // printing the addres of num





}