#include <iostream>
#include <vector>
#include <utility> // Required for std::pair
using namespace std;
// to find the peak mountian in the array 
int main(){
    int n;
    cin >> n; // size of the array 
    int arr[n];
    for(int i =0 ; i<n ; i++ ){
        cin >> arr[i];
    }
    int start = 0 , end = n-1, mid , index;
    while(start<=end){
        mid=end+(start-end)/2;
        if(mid<arr[mid]){
            end = mid -1 ;
            index = mid;
        }
        else{
            start= mid +1;
            index = mid +1;
        }
    }
}

// to find the rotated array 

int main(){
    int n; 
    cin >>n ; // this is the array input 
    int arr[n];
    for(int i =0 ; i<=n ; i++){
        cin >> arr[i];
    }
    int index,start=0, end = n-1;
    int pivot = arr[0]; // this is the first element of the array
    int mid;
    while(start< end){
        mid  = (start + end ) % n; 
        if(arr[mid]>pivot){
            start = mid + 1 ; 
            index = mid;
        }
        else{
            end = mid - 1; 
        }

    }
    cout << (index+1)%n;



}