#include<iostream>


using namespace std;

// Function prototype for selection sort
void selection_sort (int arr[], int length);

int main(){

    // Unsorted array to be sorted using selection sort
    int arr[] = {64, 25, 12, 22, 11};
    int length = sizeof(arr) / sizeof(arr[0]);

    // Call selection sort function
    selection_sort(arr, length);

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


// Selection sort algorithm
// This function sorts an array in ascending order using selection sort
// Logic:
// 1. For each position in the array, find the minimum element in the unsorted part
// 2. Swap the found minimum element with the first unsorted element
// 3. Repeat until the array is sorted
void selection_sort (int arr[], int length) {
    for (int i = 0; i < length - 1; i++) {
        int min_pos = i; // Assume the first unsorted element is the minimum
        // Find the minimum element in the unsorted part
        for (int j = i + 1; j < length; j++) {
            if (arr[j] < arr[min_pos]) {
                min_pos = j; // Update min_pos if a smaller element is found
            }
        }
        // Swap the found minimum element with the first unsorted element
        if (min_pos != i) {
            swap(arr[i], arr[min_pos]);
        }
        // Debug: Print the array after each pass
        // cout << "After pass " << i+1 << ": ";
        // for (int k = 0; k < length; k++) cout << arr[k] << " ";
        // cout << endl;
    }
    // After the loop, the array is sorted
}