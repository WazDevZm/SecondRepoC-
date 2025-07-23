#include<iostream>

using namespace std;
  
// implementing a Bubble Sort, so long as there is swap we swap
void BubbleSort (int array[], int size){
    bool swap;
    int temp;
    do {
        swap = false;
        for (int count = 0; count < (size -1); cout++) {
            if ( array[count] > array[i + 1 ]){
                // swap algoritms just here:
                temp = array[count];
                array[count] = array[i + 1];
                array[i + 1] = temp;
                swap true;
            }
        }
    } while (swap)
}

int main (){





}