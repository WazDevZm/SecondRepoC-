#include<iostream>
using namespace std;
// we are learning about setters and getters in C++

class Student {
    private:
          int SINumber;
    public:
    // Setter for SiNumber
    void  setSinNumber(int si) {
        if (si<0){
            cout<<" SIN Number cannit be negative."<<endl;
        } else{
            SINumber = si;
        }
        
    }
    // Getter for SINumber
    int getSinNumber() const{
        return SINumber;
    }
};
class Fruit {
    private:
        string name;
    public:
        // Setter for name
        void setName(const string& n) {
            name = n;
        }

        // Getter for name
        string getName() const {
            return name;
        }
};
// implement a setter and getter in a class
class Cars {
    private:
          string model;
          int carNumber;
    public:
    // setter for model
    void setModel(string m)  {
        model = m;
    }
    // getter for model
    string getModel (){
        return model;
    }
     
    //setter for carNumber
    void setCarNumber(int cn) {
        if (cn <0) {
            cout<<"Car number cannot be negative."<<endl;

        }
        else {
            carNumber = cn;
        }
    }
    // getter for the carNumber
    int getCarNumber() const {
        return carNumber;
    }
};
class Employee {

private:
    double salary;
public:
    // Setter for salary
    void setSalary(double s) {
        if (s < 0) {
            cout << "Salary cannot be negative." << endl;
        } else {
            salary = s;
        }
    }

    // Getter for salary
    double getSalary() const {
        return salary;
    }
};

int main(){
    Employee employee1;
    employee1.setSalary(50000);
    cout << "Employee's salary: $" << employee1.getSalary() << endl;
    Student student1;
    student1.setSinNumber(123456);
    cout << "Student's SIN Number: " << student1.getSinNumber() << endl;
}