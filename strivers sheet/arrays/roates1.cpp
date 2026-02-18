int n = nums . size();// size of the array 
    int check = 0 ; // used to check 
    for (int i = 0 ; i < n ; i ++){
        int next = nums[(i+1)%n]; // used to check the next element in the array 
        if(nums[i]>next){
            check += 1; 
            }// increment by 1 ;
        if(check > 1 ){
            return false ;
        }

    }
    return true;