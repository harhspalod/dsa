//https://www.geeksforgeeks.org/problems/sum-of-array2326/1
// User function template for C++
class Solution {
  public:
    // Function to return sum of elements
    int arraySum(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
        for(int i = 0 ; i < n ; i++ ){
            sum = sum + arr[i];
        }
        return sum;
        
 
        
    }
};

// important thing          int n = arr.size();
