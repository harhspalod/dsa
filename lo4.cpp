#include<iostream>
using namespace std;
//basic loops 
int main(){
    // // static 
    // for(int i = 1; i<=10 ; i++){
    //     cout<<14*i<<endl;

    // }
    // // user input 
    // int n;
    // cin >> n ;
    // for(int i = 1 ; i<11 ; i++){
    //       cout << n*i << endl;
    // }
    // prime number
    // int n;
    // cin >> n;
    //   if (n <= 0) {
    //     cout << n << " should be greater than 0";
    //     return 0;  
    // }

    // if (n == 1) {
    //     cout << "1 is not a prime number";
    //     return 0;
    // }
    // int x = 0;
    // for(int i = 2 ; i <=n-1;i++){
    //     if(n%i==0){
    //         cout << n << "is not a prime number";
    //         x =1;
    //         break;
    //     }
        
        
    // }
    // if (x!= 1){
    //     cout << n <<"is a prime number";
    //     }
    
    //fubonacci series 
    int f0 = 0;
    int f1 = 1;
    int n;
    cin >> n;
    int curr;
    if (n >= 1) cout << f0 << " ";
    if (n >= 2) cout << f1 << " ";
    for( int i = 3 ; i <= n ; i ++){
        curr= f1+f0;
        f0=f1;
        f1= curr;
        
        cout << curr << endl;
    }
    


    return 0;
}

