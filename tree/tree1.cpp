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

Node* Binarytree() {
    int x;
    cout << "Enter value (-1 for NULL): ";
    cin >> x;

    if (x == -1) {
        return NULL;
    }

    Node* root = new Node(x);

    cout << "Enter left child of " << x << endl;
    root->left = Binarytree();

    cout << "Enter right child of " << x << endl;
    root->right = Binarytree();

    return root;
}

// Preorder
void preorder(Node* root) {
    if (!root) return;

    cout << root->data << " ";   // space added
    preorder(root->left);
    preorder(root->right);
}

// Inorder
void inorder(Node* root) {
    if (!root) return;

    inorder(root->left);
    cout << root->data << " ";   // space added
    inorder(root->right);
}

// Postorder
void postorder(Node* root) {
    if (!root) return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";   // space added
}

int main() {
    Node* root = Binarytree();

    cout << "\nTree created successfully!\n";

    cout << "\nPreorder: ";
    preorder(root);

    cout << "\nInorder: ";
    inorder(root);

    cout << "\nPostorder: ";
    postorder(root);

    return 0;
}