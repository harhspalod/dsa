class Solution {
  public:
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        if(l==r){
            return ;
        }
        int mid = l+(r-l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        mergearray(arr,l,mid,r);
    }
    void mergearray(vector<int>& arr, int low,int mid, int high){
        int n = high-low+1;
        int *a =new int[n];
        int pos = 0;
        int first  = low;
        int second = mid+1;
        while(first<=mid && second <= high){
            if(arr[first]<=arr[second]){
                a[pos]=arr[first];
                pos++;
                first++;
            }
            else{
                a[pos] = arr[second];
                pos++;
                second++;
            }
        }
        while(first<=mid){
            a[pos++]=arr[first++];
        }
          while(second<=high){
            a[pos++]=arr[second++];
        }
        pos=0;
      for (int i = low; i <= high; i++) {
    arr[i] = a[pos++];
}

        delete[] a;
    }
};