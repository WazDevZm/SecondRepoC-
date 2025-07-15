#include <iostream>

using namespace std;
// makng function declarations

void quick_sort(int arr[], int length);
void quicksort_recursion(int arr[], int low, int high);
int partition(int arr[], int low, int high);

int main (){
    int arr[] = {10, 7, 8, 9, 1, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    quick_sort(arr, length);
    for (int i = 0; i < length; i++){
        cout << arr[i] << " ";
    }
    cout << endl <<endl;
    return 0;
}
void quick_sort(int arr[], int length) {
    quicksort_recursion(arr, 0, length - 1);
}
void quicksort_recursion(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quicksort_recursion(arr, low, pi - 1);
        quicksort_recursion(arr, pi + 1, high);
    }
// we are building and leanring w to imelemt the quick sort algottiem in c++, appying the alogoritm to the left and right portion o f the arra
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // pivot
    int i = (low - 1); // Index of smaller element
    for (int j = low; j < high; j++) {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot) {
            i++; // increment index of smaller element
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}
