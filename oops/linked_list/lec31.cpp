// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
};
void Print(node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i ++){
        cin>>arr[i];
    }
    node *head = new node;
    head->data=arr[0];
    node *temp = head;
    for(int i =1 ; i <n ; i++){
        temp->next = new node;
        temp = temp->next;
        temp->data=arr[i];
    }
     temp = head;
     for(int i =0 ; i <n ; i++){
       cout<<temp->data;
       temp = temp->next;
    }
    Print(head);

    return 0;
}