// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *prev;
    Node *next;
    Node(int x){
        data = x;
        prev= NULL;
        next = NULL;
    }
};
int main() {
    // Write C++ code here
    int arr[5]={1,2,4,5,3};
    Node *head;
    head = new Node(1);
    Node *first = head;
    for(int i = 1 ; i < 5 ; i ++){
        first->next = new Node(arr[i]);
        first -> next ->prev = first;
        first= first ->next;
    }
    return 0;
}