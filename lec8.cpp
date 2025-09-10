#include<iostream>
using namespace std;
// int main(){
//     int arr[20] ;
//     int n;
//     cin >> n;
//     for(int i = 0 ; i <n ; i++){
//         cin>>arr[i];
//     }
//     cout << "REVERSE ARRAY";
//     for(int v= n-1;v>=0 ; v-- ){
//         cout<< endl << arr[v] << endl;
//     }
//     cout << "array has been printed";
// }

// smallest number
// int main(){
//     char ar[6]= {'a','b','c'};
//     int arr[20];
//     int n;
//     cin >> n;
//     for(int i = 0 ; i <n ; i++){
//         cin>>arr[i];
//     }
//     int z=arr[0];
//     for (int i = 1 ; i < n ;i++){
//         if(arr[i] > z){
//             z=arr[i];
//         }
    
//     }
//     cout  << z;
// }

// odd array 
// int main(){
//      int arr[20];
//     int n;
//     cin >> n;
//     for(int i = 0 ; i <n ; i++){
//         cin>>arr[i];
//     }
//     for(int z =  0 ; z < n ;z ++){
//         if (arr[z]%2!=0 ||arr[z]%-2!=0  ){
//             cout<<arr[z] << endl;
//         }
//     }
// }

// void Prime(int num){
//     if (num<2){
//         return ;
//     }
//     for(int i = 2 ; i < num -1; i++){
//         if (num%i==0){
//             return ;
//         }
//     }
//     cout<<num<<"";

// }
// // prime number
// int main(){
//      int arr[20];
//     int n;
//     cin >> n;
//     for(int i = 0 ; i <n ; i++){
//         cin>>arr[i];
//     }
//     for (int i = 0 ; i < n; i++){
//         Prime(arr[i]);
//     }
// }

//Rotation of array;



// gfg specail array problem 



  int makeProductOne(int arr[], int N) {
        // code here
        int count_zero = 0;
        int step = 0; 
        int mul = 1; 
        for(int i = 0 ; i < N ; i ++){
            if(arr[i]>0){
              step = step + (arr[i]-1);
                mul=mul*1;
            }
            else if (arr[i]<0){
                step = step + (-1-arr[i]);
                mul=mul*-1;

            }
            else{
                step = step +1;
                count_zero++;
            }
            
        }
        if (mul==1 || count_zero>0){
            return step;
        }
        else if (mul==-1){
            step=step +2;
            return step;
        }
        
    }