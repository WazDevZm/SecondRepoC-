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
    /* Main features of Arrays
    1. Arrays are a collection of similar data types.
    2. Arrays are stored in contiguous memory locations.
    3. Arrays are a fixed size.
    4. Arrays are a collection of elements of the same data type.
    5. Arrays are a collection of elements of the same data type.

    */

    // finding the avrage of elements in an array
    int Array4[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int length = sizeof(Array4)/sizeof(Array4[0]);
    float sum = 0;
    float average;

    //finding the sum using the for each lopp
    for(int a :  Array4){
        sum+= a;
    }
    average = sum/length;
    cout << "The average of the array is: " << average << endl;
    // program to find the largest element in an array
    int Array5[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int largest = Array5[0];

    for (int x : Array5) {
        if (x > largest) {
            largest = x;
        }
    }

    return 9;
}