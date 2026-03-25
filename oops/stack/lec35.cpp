// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class stack{
    int top;
    int *arr;
    int size;
    public:
        // basic size (init)
        stack(int size){
            arr=new int(size);
            top = -1;
            this->size = size;
        };
        // push
        void push(int data){
            if(size-1==top){
                cout<<"stack overflow \n";
                return;
            }
            top++;
            arr[top]=data;
        };
        // pop
        void pop(){
            if(top==-1){
                cout<<"stack underflow \n";
                return;
            }
            top--;
            return;
        };
        // view the peek elemet / top data
        int peek(){
            if(top==-1){
                cout<<"stack underflow";
                return -1;
            }
            return arr[top];
        };
        bool empty(){
            return top==-1;
        };
};
int main() {
    // Write C++ code here
    stack s(4);
    s.push(42);
    s.push(41);
    s.push(43);
    s.push(44);
    cout<< s.peek()<<endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout<< s.peek()<<endl;
    return 0;
}