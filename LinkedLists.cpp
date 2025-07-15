// What are linked lists?
// Linked lists are a data structure consisting of nodes, where each node contains data and a pointer to the next node in the sequence.
// They are dynamic in nature, allowing for efficient insertion and deletion of elements compared to arrays, which have a fixed size. Linked lists can be singly linked (each node points to the next) or doubly linked (each node points to both the next and previous nodes). They are commonly used in various applications, such as implementing stacks, queues, and other data structures.
// Linked lists are particularly useful when the size of the data structure is not known in advance or when frequent insertions and deletions are required. 
// They can also be used to implement more complex data structures like hash tables, trees, and graphs. Linked lists are a fundamental concept in computer science and are often used in algorithms and data structure courses to teach the principles of dynamic memory allocation and pointer manipulation.
// Linked lists are a fundamental data structure in computer science, consisting of nodes that store data and pointers to the next node in the sequence. They are dynamic in nature, allowing for efficient insertion and deletion of elements compared to arrays, which have a fixed size. Linked lists can be singly linked (each node points to the next) or doubly linked (each node points to both the next and previous nodes). They are commonly used in various applications, such as implementing stacks, queues, and other data structures. Linked lists are particularly useful when the size of the data structure is not known in advance or when frequent insertions and deletions are required. They can also be used to implement more complex data structures like hash tables, trees, and graphs. Linked lists are a fundamental concept in computer science and are often used in algorithms and data structure courses to teach the principles of dynamic memory allocation and pointer 

//commenting the code out from the code 
//when next isused addres is printed ot rather than the actual nae ao  value

#include<iostream>

using namespace std;


class Student{
    public:
        string name;
        Student*next = NULL;
        Student(string name){
            this->name = name;
        };
      //  int age;
int main(){
    Student *stud = new Student("Wazingwa");
    Student *stud2 = new Student("Mugla");
    Student *stud3 = new Student("Chilufya");
    // Creating a linked list of students
    stud->next = stud2;
    stud2->next = stud3;
    stud3->next = NULL;

    //pring out of a linked list
    cout<<















    return 0;
}