#include <iostream>
using namespace  std;
int main(){
    int arr[3] [2]; //[rows][colums]
    for(int i = 0 ; i < 3; i ++){
        // rows 
        for(int j = 0 ; j < 2 ; j ++){
            // columns
            cin>> arr[i][j];
        }
    }
      for(int i = 0 ; i < 3; i ++){
        // rows 
        for(int j = 0 ; j < 2 ; j ++){
            // columns
            cout<< arr[i][j];
        }
    }
    // if we want to print the column first column major array
    for(int i = 0 ; i < 2 ; i ++){
        for(int j = 0 ; j < 3 ; j++){
            cout<< arr[j][i];
        }
    }    
    int target = 19;
    // lets find it searching
    for(int i = 0 ; i < 3 ; i ++){
        for(int j  = 0 ; j < 2 ; j ++){
            if(arr[i][j]==target){
                cout<<"found";
                return 0 ; 
            }

        }
    }
    cout<<"not found";

    // sum column wise
    for(int i = 0 ; i < 3 ; i ++){
        int sum = 0 ; 
        for(int j = 0 ; j < 4;j++){
            sum += arr[i][j];
        }
        cout<< sum; // sum of each row 
    }
    // transpose of a mtrix
    for(int i = 0 ; i < 3 -1; i++){
            for(int j = i + 1 ; j <3 ; j ++){
                int temp = arr[j][i];
                arr[j][i] = arr[i][j];
                arr[i][j] = temp;
            }
        }

    for(int i = 0 ; i < n/2 ; i ++){ // it is swap
        for(int j = 0 ; j < m ; j ++){
            swap(arr[i][j],arr[n-i-1][j]);
        }
    }
    return 0 ; 
}



