#include<iostream>

using namespace std;

void ShowValues(int values[], int size);// function prototype
int main (){

    const int SIZE = 5;
    int values[SIZE] = {10, 20, 30, 40, 50};
    ShowValues(values, SIZE);





    return 0;
}
// function definition
void ShowValues(int values[], int size){
    for(int i =0; i<size; i++){
        cout<<values[i]<<" ";
    }
};
// when making a function prototye always include the parameters int he proti=es as well as the function definition
// this is a function that takes an array and its size as parameters and prints the values in the array
// if not done, error will occur