#include <iostream>
using namespace std;
 #include <vector>
class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        int n = arr.size();
        for (int i = 0; i < n - 1; i++) {
            int index = i;
            // find the index of the smallest element
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[index]) {
                    index = j;
                }
            }
            // swap once after finding the min element
            int temp = arr[index];
            arr[index] = arr[i];
            arr[i] = temp;
        }
    }
};



// buble sort 

class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
        int n = arr.size();
        for(int i = 0 ; i < n - 1; i++ ){
            for (int j= 0 ; j < n-1-i;j++){
                if(arr[j]>arr[j+1]){
                    int temp = arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    }
            }
        }

    }
};

//insertion sort 
class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        int n = arr.size();
        for(int i =0  ; i <n-1 ; i++){
            for(int j = i; j>=0; j--){
                if(arr[j]>arr[j+1]){
                    int temp = arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
                else{
                    break;
                }
            }
        }
        
    }
};

//Rotate the array by one pst
class Solution {
  public:
    void rotate(vector<int> &arr) {
       int n = arr.size();                // ✅ correct
       int lastn = arr[n-1];              // ✅ store last element
       for(int i = n-2; i >= 0 ; i--) {   // ✅ shift right from n-2 down to 0
           arr[i+1] = arr[i];
       }
       arr[0] = lastn;                    // ✅ put last element in front
    }
};


//find the fine 

class Solution {
  public:
    long long int totalFine(int date, vector<int> &car, vector<int> &fine) {
                int n = car.size();
            long long int collection = 0;
            if (date % 2==0){
                for (int i = 0 ; i < n ; i++ ){
                    // for even then add the odds one
                    if(car[i]%2==1){
                        collection =collection+ fine[i];
                    }
                }
            }
            else{ 
                for (int i = 0 ; i < n ; i++ ){
                    // for odd then add the even one
                    if(car[i]%2==0){
                        collection = collection+ fine[i];
                    }
                }
                
            }
            return collection;
    }
};


// union of 2 sorted arrays
