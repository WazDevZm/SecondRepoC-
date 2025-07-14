#include<iostream>
using namespace std;

int main(){
 // Bubble sorting is a sorting alogorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order. The pass through the list is repeated until no swaps are needed, which means the list is sorted.
int arr[] = {64, 34, 25, 12, 22, 11, 90};
int length = sizeof(arr)/sizeof(arr[0]);
// implementing bubble sort
for (int i = 0; i < length ; i++) {
    for (int j = 0; j < length -1; j++) {
        if (arr[j] > arr[j + 1]) {
            // swap arr[j] and arr[j+1]
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
}










 return 6;
}