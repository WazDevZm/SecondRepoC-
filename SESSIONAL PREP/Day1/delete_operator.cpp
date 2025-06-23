#include <iostream>
using namespace std;

int main() {
    int *ptr = NULL;

    // Request memory for integer variable
    // using new operator
    ptr = new int(10);
    if (!ptr) {
        cout << "allocation of memory failed";
        exit(0);
    }

    cout << "Value of *p: " << *ptr << endl;

    // Free the value once it is used
    delete ptr;
    
    // Allocate an array
    ptr = new int[3];
    ptr[2] = 11;
    ptr[1] = 22;
    ptr[0] = 33;
    cout << "Array: ";
    for (int i = 0; i < 3; i++)
        cout << ptr[i] << " ";

    // Deallocate when done
    delete[] ptr;
    
    return 0;
}