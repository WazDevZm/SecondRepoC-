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

    node = new Node; // Create a new node
    node->value = 20; // Example value
    node->next = nullptr; // Initialize next pointer to null
    node->previous = head; // Set previous pointer to the current head
    if (head == nullptr) {
        head = node; // If head is null, set head to the new node
        tail = node; // Set tail to the new node as well
    } else {
        tail->next = node; // Link the current tail's next to the new node
        tail = node; // Update tail to the new node
    }
return 0; // Return 0 to indicate successful execution
}