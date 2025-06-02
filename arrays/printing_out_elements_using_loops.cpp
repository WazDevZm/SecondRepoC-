#include<iostream>
using namespace std;

int arr[] = {1, 2, 3, 4, 5};

const int SIZE = sizeof(arr) / sizeof(arr[0]);


int main (){
    // Printing elements of the array using a for loop
    cout << "Elements of the array using a for loop:" << endl;
    for (int i= 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    };
    cout << endl;
    // after each irtation the loop will print the next element of the array
    // Printing elements of the array using a while loop
    cout << "Elements of the array using a while loop:" << endl;
    int i = 0;
    while ( i < SIZE ) {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;
 // using a do-while loop to print elements of the array
   int a = 0;
     do {
        cout << arr[a] << " ";
        a++;
     } while (a < SIZE);
    cout << endl;

    return 0;
}