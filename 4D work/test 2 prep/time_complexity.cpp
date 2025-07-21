#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};
bool search (Node* head, int target){
    while (head != nullptr){
        if (head->data == target){
            return true; // Target found
        }
        head = head->next; // Move to the next node
    }
    return false; // Target not found
}

int main (){










    return 5;
}