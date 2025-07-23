#include<iostream>

using namespace std;



class Node{
    public:
    int value;
    Node* next;
    Node* previous;
};



int main () {

    Node* head = nullptr; // Initialize head pointer to null
    Node* tail = nullptr; // Initialize tail pointer to null
    Node* node= new Node;
    node->value = 10; // Example value
    node->next = nullptr; // Initialize next pointer to null
    node->previous = nullptr; // Initialize previous pointer to null


return 0; // Return 0 to indicate successful execution
}