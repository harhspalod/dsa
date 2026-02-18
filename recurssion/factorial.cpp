#include <stdio.h>
#include <iostream>
using namespace std;


int factorial(int n){
    if(n == 1){
        return 1 ;
    }
    return n * factorial(n-1); 

}
int power(int n){
    if (n ==0){
        return 1;
    }
    return 3*power(n-1);
}

int fibonnaci(int n){
    if(n == 0  || n ==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    return fibonnaci(n-1)+fibonnaci(n-2);
}


int main(){
    int n;
    cin >> n ;
    cout << factorial(n) << endl;
    cout<< power(n)<<endl;
  cout<<   fibonnaci(n);
}