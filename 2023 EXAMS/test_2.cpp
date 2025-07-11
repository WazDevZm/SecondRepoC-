#include<iostream>

using namespace std;

// ddefine all the classes and their setters and getters
        } else {
            carNumber = cn;
        }
    }
    // getter for carNumber
    int getCarNumber() const {
        return carNumber;
    }
};

int main() {
    // we are building and deploying a linked list in C++

    // Example usage of the Student class
    Student student;
    student.setSinNumber(12345);
    cout << "Student SIN Number: " << student.getSinNumber() << endl;

    // Example usage of the Fruit class
    Fruit fruit;
    fruit.setName("Apple");
    cout << "Fruit Name: " << fruit.getName() << endl;

    // Example usage of the Cars class
    Cars car;
    car.setModel("Toyota");
    car.setCarNumber(56789);
    cout << "Car Model: " << car.getModel() << endl;

    return 0;
}