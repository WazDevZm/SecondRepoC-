#include<iostream>

using namespace std;

// declaring my class
class Car {
    public:
          string brand;
          int modelNumber;
          int year;
    // constructor with parameters
    Car (string x, int y, int z ){
        brand = x;
        modelNumber = y;
        year = z;
    }
    
};
// This code demonstrates the use of a constructor with parameters in a class.
int main (){
    Car car1("Toyota", 2021, 2022); // Initializing car1 with parameters

    cout<<car1.brand<<endl; // This will not print anything as car1 is not initialized
    cout<<car1.modelNumber<<endl; // This will not print anything as car1 is not initialized
    cout<<car1.year<<endl;
// 
    return 56;
}