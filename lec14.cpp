#include <iostream>
#include <vector>
#include <utility> // Required for std::pair
using namespace std;
std::pair<long, long> find_indexes(std::vector<long long> v, long long x) {
    long long mid, start = 0, end = v.size() - 1;
    long long leftmost = -1, rightmost = -1;

   
    while (start <= end) {
        mid = start + (end - start) / 2;
        
        if (v[mid] == x) {
            leftmost = mid;
            end = mid - 1;
        } else if (v[mid] > x) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    start = 0;
    end = v.size() - 1;

    
    while (start <= end) {
        mid = start + (end - start) / 2;

        if (v[mid] == x) {
            rightmost = mid;
            start = mid + 1;
        } else if (v[mid] > x) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    
    return {leftmost, rightmost};
}


// find the peak element 

class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int n = arr.size();
        int start = 0, end = n - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            // Handle boundaries safely
            if ((mid == 0 || arr[mid] > arr[mid - 1]) &&
                (mid == n - 1 || arr[mid] > arr[mid + 1])) {
                return mid; // found a peak
            }
            // Move right if slope going up
            else if (mid < n - 1 && arr[mid] < arr[mid + 1]) {
                start = mid + 1;
            }
            // Move left otherwise
            else {
                end = mid - 1;
            }
        }

        return -1; // not expected (since peak always exists)
    }
};


// find the smallest element in an array by the binary search approach 
int main(){
int n;
cin >> n;
int arr[n];
for(int i = 0 ; i < n ; i ++){
    cin>>arr[i];
}
int start = 0 , end = n-1 , mid, index; 
while(start<=end){
    mid = (start+end)/2;
    if(mid < arr[mid]){
        index = mid;
        end = mid -1;
    }
    else{
        index = mid +1 ; 
        start = mid +1;
    }
}



}


// min in roated sorted array 
class Solution {
public:
    int findMin(vector<int>& arr) {
        int n = arr.size();
        int start = 0 , mid , end = n-1 ;
        int ans = INT_MAX;
        while(start<= end ){
            mid = (start+end )/2;
            if (arr[start] <= arr[mid] ){
                ans = min(arr[start],ans);
                start = mid + 1;
            }
            else{
                ans = min(ans,arr[mid]);
                end=mid-1 ; 
            }
        }
        return ans;
    
    }
};

//1:30
// solve 5 qn 


class Solution {
  public:
    int search(vector<int>& arr, int key) {
        int n = arr.size();// this is the size of the array
        int start = 0 , end =  n -1 , mid ;
        int index = -1;
        while(start<=end){
        mid = start + (end - start) / 2;
            if(arr[mid] == key){
                return mid;
            }
            if (arr[start] <= arr[mid] ){
                if(key< arr[start]|| arr[mid] < key){
                    start=mid+1;
                }
                else{
                    end = mid -1 ;
                }
            }
            else{
                if(arr[start]<=key || key<arr[mid]){
                    end = mid-1;
                }
                else{
                    start=mid+1;
                }
            }
        }
                return index;

        
        
    
    }
};