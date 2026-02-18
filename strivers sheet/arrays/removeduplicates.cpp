 int removeDuplicates(vector<int>& arr) {
        int n = arr.size();// size of the array
        int l = 1; 
        for(int r = 1; r < n ; r++){
            if(arr[r]!= arr[r-1]){
                arr[l]=arr[r];// make the left pointer array to the array of the right pointer
                l=l+1;

            }
            

        }
        return l ; 
    }