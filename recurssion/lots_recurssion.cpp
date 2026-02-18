// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void recsussion(int n){
    if(n == 0){
        return;
    }
    cout<< n<< "just this many days remaining for your birthday"<< endl;
    recsussion(n-1);
}
void count(int start , int end){
    if(start >= end){
        return;
    }
        count(start+1,end);
    cout<<start;
}

void sum_of_array(int *a,int sum, int size){
    if(size == 0){
        cout<< sum;
        return ;
    }
    sum +=a[0];
    sum_of_array(a+1,sum,size-1);
    cout<<sum<<endl;
}

void linear_search(int *a, int key, int size,int index=0){
    if(size==0){
        cout<<"key not found it is not there in the array";
        return;
    }
    if(key==a[0]){
        cout<<"key found in the array"<<endl<<"at index"<<endl<<index;
        return;
    }
    linear_search(a+1,key,size-1,index+1);
}
void double_array(int *a,int size){
    if(size==0){
        return;
    }
    cout<<a[0]+a[0]<<endl;
    double_array(a+1,size-1);
}

void binarysearch(int *a , int start , int end,int key ){
    if(start > end){
        cout<< "not found";
        return;
    }
    int mid = start+(end-start)/2;
    if(a[mid]==key){
        cout<<"found";
        return;
        }
    else if(a[mid]>key){
        end =mid-1;
        binarysearch(a,start,end,key);
    }
    else{
        start = mid+1;
        binarysearch(a,start,end,key);
    }
}
int main() {
    // Write C++ code here
//   cout << "Try programiz.pro";
    // recsussion(20);
    // count(1,10);
    int a[6]={1,2,10,11,12,5};
    int bin[6]={1,2,3,4,5,6};
    binarysearch(bin,0,6,6);
    // int sum = 0;
    // double_array(a,6);
    // linear_search(a,5,6);
    
//   sum_of_array(a,sum,6);
    return 0;
}

