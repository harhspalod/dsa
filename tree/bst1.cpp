#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};

Node* Bst(Node* root, int value) {

    if (!root) {
        return new Node(value);
    }

    if (value < root->data) {
        root->left = Bst(root->left, value);
    }
    else if (value > root->data) {
        root->right = Bst(root->right, value);
    }

    return root;
}

int main() {

    int arr[] = {10, 13, 4, 8, 11, 19, 2, 7, 18};
    int n = 9;

    Node* root = NULL;

    for (int i = 0; i < n; i++) {
        root = Bst(root, arr[i]);
    }

    return 0;
}