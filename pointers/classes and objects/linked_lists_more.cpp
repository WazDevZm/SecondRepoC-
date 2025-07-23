#include <iostream>
#include <string>
using namespace std;

struct StudentNode {
    string name;
    int mark;
    StudentNode* next;
};

StudentNode* createStudentList() {
    StudentNode* head = nullptr;
    StudentNode* second = nullptr;
    StudentNode* third = nullptr;
    
    head = new StudentNode();
    second = new StudentNode();
    third = new StudentNode();
    
    cout << "Enter name for first student: ";
    getline(cin, head->name);
    cout << "Enter mark for first student: ";
    cin >> head->mark;
    cin.ignore();
    
    head->next = second;
    
    cout << "Enter name for second student: ";
    getline(cin, second->name);
    cout << "Enter mark for second student: ";
    cin >> second->mark;
    cin.ignore();
    
    second->next = third;
    
    cout << "Enter name for third student: ";
    getline(cin, third->name);
    cout << "Enter mark for third student: ";
    cin >> third->mark;
    
    third->next = nullptr;
    
    return head;
}

void printList(StudentNode* head) {
    StudentNode* current = head;
    while (current != nullptr) {
        cout << current->name << ": " << current->mark << endl;
        current = current->next;
    }
}

int main() {
    cout << "Enter data for three students:" << endl;
    StudentNode* myList = createStudentList();
    
    cout << "\nStudent List:" << endl;
    printList(myList);
    
    // Remember to deallocate memory when done
    // (Implementation omitted for brevity)
    
    return 0;
}