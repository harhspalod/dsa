#include<iostream>
using namespace std;

int main(){
    int num = 30 ;
    cout<<num<<endl;
    int *p;
    p=&num;
    *p = 20;
    cout<<num<<endl;
}


// array manupulationn by pointer is here
int main(){
    int arr[10]={10,12,13,14,15,16};
    int *p;
    p = arr; // pinter of the array
    for(int i =0 ; i < 10; i++){
        cout<<p<<" ";
        p++; // it goes with the address 
        // arr++; // it cannt incement it 
    }
    cout<<p;
    return 0;
}