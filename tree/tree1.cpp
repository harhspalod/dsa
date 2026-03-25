#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

// Function to create binary tree
Node* Binarytree() {
    int x;
    cout << "Enter value (-1 for NULL): ";
    cin >> x;

    // Base condition
    if (x == -1) {
        return NULL;
    }

    // Create node
    Node* root = new Node(x);

    cout << "Enter left child of " << x << endl;
    root->left = Binarytree();

    cout << "Enter right child of " << x << endl;
    root->right = Binarytree();

    return root;
}

int main() {
    Node* root = Binarytree();
    cout << "Tree created successfully!" << endl;
    return 0;
}