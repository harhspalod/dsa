#include <iostream>
using namespace std;
 
// int main(){
//     int arr[5]={2,3,8,7,4};
//     for (int i = 0 ; i < 6; i ++){
//         for(int j = 0 ; j < 5 ; j++){
//             cout<<arr[j]<<" ";
//             cout<<endl;
//         }
//     }

// }


// it will remove the last element

// int main(){
//     int arr[5]={2,3,8,7,4};
//     int n = 5;


//     for (int i = 0 ; i < n; i ++){
//         for(int j = 0 ; j < n-i ; j++){
//             cout<<arr[j];

//         }
//         cout<<endl;
//     }

// }

// to remove the first element 
// int main(){
//     int arr[5]={2,3,8,7,4};
//     int n = 5;


//     for (int i = 0 ; i < n; i ++){
//         for(int j = i ; j < n; j++){
//             cout<<arr[j];

//         }
//         cout<<endl;
//     }

// }

// prinitn it reverce 
// int main(){
//     int arr[5]={2,3,8,7,4};
//     int n = 5;


//     for (int i = 0 ; i < n; i ++){
//         for(int j = n-1 ; j >= 0 ; j--){
//             cout<<arr[j];

//         }
//         cout<<endl;
//     }

// }

// reverse but -1 
// int main(){
//     int arr[5]={2,3,8,7,4};
//     int n = 5;


//     for (int i = 0 ; i < n; i ++){
//         for(int j = n-i-1 ; j >= 0 ; j--){
//             cout<<arr[j];

//         }
//         cout<<endl;
//     }

// }


// int main(){
//     int arr[5]={2,3,8,7,4};
//     int n = 5;


//     for (int i = 0 ; i < n; i ++){
//         for(int j = 0 ; j <=n-i-1 ; j++){
//             cout<<arr[j];

//         }
//         cout<<endl;
//     }

// }

// duplicate elements in an array

// int main(){
//     int arr[5]={2,3,2,1,4};
//     int n = 5;
//     int count[n]={0};
//     for (int i = 0 ; i < n; i ++){
//         count[arr[i]]++; // it will count the number of times the element is present in the array
//     }
//     for (int i=0; i<n;i++){
//         if(count[i]>1){
//             cout<<i;
//         }

//     }
// }

// count zeroeso ones and twos
//dont help me 
int main (){
    int n;
    cin>>n;
    int arr[n];
    int main[n];
    for (int i =0 ; i<n; i++){
        cin>>arr[i];
    }
    int count0=0, count1=0, count2=0;
    for (int i = 0 ; i < n ; i ++){
        if(arr[i]==0){
            count0++;
        }
        else if(arr[i]==1){
            count1++;
        }
        else{
            count2++;
        }
    }
    for (int i = 0 ; i < count0 ; i ++){
        main[i]=0;
    }
    for(int i = count0;i<count0+count1;i++){
        main[i]=1;
    }
    for(int i = count0+count1;i<count0+count1+count2;i++){
        main[i]=2;
    }
    for(int i = 0 ; i < n ; i ++){
        cout<<main[i]<<" ";
    }
    

}