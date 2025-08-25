#include <iostream>
using namespace std;
int main (){
    // int n;
    // cin>>n;
    // int digit=0 ;int j=1;
    // for(int i=1;i<=10000;i++){
    //     if(n/j==0){
    //         cout<<digit;
    //         break;
    //     }
    //     j=j*10;
    //     digit=digit+1;


    // }

    // while(n!=0){
    //     n=n/j;
    //     j=j*10;
    //     digit=digit+1;
    // }
    // cout<<digit;

// int k=1;
// int dig=0;
//     int l;// Reverse
//     while(n!=0){
//          l=n%10; // only take take the last number by modulus 
      
//         dig=dig*10+l;
//         n=n/10; //  remvoes the last digit or make it point but point cant be in int so takes whole number
//     }
//     cout << dig;

// palindro

// int n;
// cin >> n ;
// int og=n;
// int sum=0;
// while(n!=0){
//     int l = n%10;
//     sum=sum*10+l;
//     n=n/10;

// }
// int bg=0;
// while(og!=0){
//     int m = og%10;
//     int y= sum%10;
//    if(m==y){
//         bg=1;
//     }
//     else {
//         bg=0;
//         break;
//     }
//     og=og/10;
//     sum=sum/10;

// }
// if(bg==0){
//     cout<<"number is not a palindrome";
//     return 0;
// }
// if(bg==1){
//     cout<<"number is a palindrome";
//     return 0;
// }

/// decimal to binay 
// dont put n= 0 it can be an issue
int n; 
cin >> n ;
int sum =0 ;
while (n){
    int l = n%2;
    sum=sum*10+l;
    n=n/2;
}
int k = 0;
while(sum){
    int m = sum %10;
    k = k*10+m;
    sum=sum/10;
}

cout<<k;
    

 }