// learning linked lists
#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr; // Initialize next pointer to null
    }
}; // node are data structures with with data section and a pointer section to point to the next node
