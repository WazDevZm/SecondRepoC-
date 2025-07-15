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
// another example of buble sort
int wazingwa[] = {5, 1, 4, 2, 8};
int length1 = 5;

for (int i = 0; i < length1; i++) {
    for (int j = 0; j < length1 -1; j++ ) {
        if (wazingwa[j] > wazingwa[j +1]) {
            // perform swap
            int temp = wazingwa[j];
            wazingwa[j] = wazingwa [j+1];
            wazingwa[j + 1] = temp; 
        }
    }
}
 for (int i = 0; i < length1; i++) {
    cout << wazingwa[i] << " "<<endl;
 }

 return 6;
}