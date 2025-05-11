#include<iostream>
using namespace std;


int main(){
    // Array
    int Array[5] = {1, 2, 3, 4, 5};
    // Looping through an array
    for(int i=0; i<5; i++){
        cout<<Array[i]<<endl;
    }
    // Using a for each loop, syntax
    for (int a : Array) {
        cout << a << endl;
    }
    // it is not neccessary to specify the size of the array
    int Array2[] = {1, 2, 3, 4, 5};
    // Looping through an array
    for(int i=0; i<5; i++){
        cout<<Array2[i]<<endl;
    }
    














    return 9;
}