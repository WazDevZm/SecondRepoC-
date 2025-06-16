#include<iostream>
using namespace std;

class Person {
private:
    int age = 13;
public:
    Person* next = NULL; // pointer to the next node
    Person* prev = NULL; // pointer to the previous node
    string name;
    // constructor to initialize the person object
    Person(string name) {
        this->name = name;
    }
};

int main() {
    // Create nodes
    Person* p1 = new Person("Wazingwa");
    Person* p2 = new Person("John");
    Person* p3 = new Person("Mike");

    // Link nodes to form a doubly linked list: p1 <-> p2 <-> p3
    p1->next = p2;
    p2->prev = p1;
    p2->next = p3;
    p3->prev = p2;
 


    return 0;
}