
#include <iostream>
#include <queue>
using namespace std;

// Node structure for the binary tree
struct Node {
    char data;
    Node* left;
    Node* right;
    Node(char val) : data(val), left(nullptr), right(nullptr) {}
};

// Preorder traversal (Root, Left, Right)
void preorder(Node* root) {
    if (root == nullptr) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Inorder traversal (Left, Root, Right)
void inorder(Node* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Postorder traversal (Left, Right, Root)
void postorder(Node* root) {
    if (root == nullptr) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// Level-order traversal (Breadth-First)
void levelOrder(Node* root) {
    if (root == nullptr) return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();
        cout << curr->data << " ";
        if (curr->left) q.push(curr->left);
        if (curr->right) q.push(curr->right);
    }
}

int main() {
    // Constructing the tree manually
    Node* A = new Node('A');
    Node* B = new Node('B');
    Node* C = new Node('C');
    Node* D = new Node('D');
    Node* E = new Node('E');
    Node* F = new Node('F');
    Node* G = new Node('G');
    Node* H = new Node('H');
    Node* K = new Node('K');
    Node* J = new Node('J');
    Node* I = new Node('I');

    // Linking nodes as per the diagram
    A->left = B; A->right = C;
    B->left = D; B->right = E;
    C->left = F; C->right = G;
    F->left = K; F->right = H;
    K->left = J; K->right = I;

    // Test each traversal
    cout << "Preorder: ";
    preorder(A);
    cout << "\nInorder: ";
    inorder(A);
    cout << "\nPostorder: ";
    postorder(A);
    cout << "\nLevel-order: ";
    levelOrder(A);

    // Clean up memory (optional in small programs, but good practice)
    delete A; delete B; delete C; delete D; delete E; delete F;
    delete G; delete H; delete K; delete J; delete I;

    return 0;
}
