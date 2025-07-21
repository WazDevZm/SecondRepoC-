#include<iostream>
using namespace std;



// when dealing with functions invovling arratys lways place the array and the size as parammters fo the array for functionaluty and qorking

int largest(int arr[], int size) {
    int max = arr[0];

    for (int i = 1; i <size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    };


    // good practice is being able to write good, clean code with good comments for future reference
    
return max;
};
int least (int MyArr[], int size) {
    int min = MyArr[0];

    for (int i = 1; i <size; i++) {
        if (MyArr[i] < min) {
            min = MyArr[i];
        }
    }
    return min;



};
// finding the average of values in an arrray

double average(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size ; i++){
        sum += arr[i];
    }
    return (double)sum/ size;
}
// the code is given as foolwa for the fooling to 

int main (){

    int arr[] = {1, 2, 3, 4, 5,98};

    cout<<largest(arr, 6)<<endl;
    // this code snippet is working to find the largest element in the array
    cout<<least(arr, 6);
 

    cout<<"The average of values is: "<<average(arr, 6);

//











    return 0;
}