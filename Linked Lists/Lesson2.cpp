#include<iostream>
#include<string>
using namespace std;
// creatting a node class
/*Linked list is a linear data structure that is used to store data. Arrays
are of static size, they have fixed size that cannot be modified.
Linked lists are dynamic in size, they can grow and shrink as needed.
A linked list is a collection of nodes, where each node contains data and a pointer to the next node in the list. Arrays  have contiguous memory allocation, while linked lists have non-contiguous memory allocation.
deletion in arrays is kind of expensive
*/
class Node{
    public:
    int value;
    Node* next;

    Node(int v){
        value= v;
        next = NULL;
    }
};
// traversing a linked list- this is the process of visiting each node in the list and performing some operation on it, such as printing the value of each node.
void tranverse(Node* head){
    Node* current = head; // start at the head of the list
    while(current != NULL){ // while there are still nodes to visit
        cout << current->value << " "; // print the value of the current node
        current = current->next; // move to the next node
    }
    cout << endl; // print a newline at the end
};

int main (){
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    node1->next = node2; // linking node1 to node2
    Node* node3 = new Node(3);
    node2->next = node3; // linking node2 to node3
    tranverse(node1); // traversing the linked list starting from node1








    return 0;
}