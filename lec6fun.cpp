#include <iostream>
using namespace std;
//  int isEvenOdd(int num){ // function declare
//         if(num % 2 == 0){ // function defined
//             return 0;
//         }
//         else{
//             return 1;
//         }
//     }
// int main (){
   
//     int num;
//     cin >> num;
//     int z = isEvenOdd(num); // function call
    
//     if (z==0){
//         cout << "It is even" << endl;
//     }
//     else {
//             cout << "It is odd" << endl;

//     }

    
// }
// 4= 3 * 2 * 1
// int factorial ( int num ){
//     int fact = 1;
//     for ( int i = 1; i <= num ; i++){
//         fact = fact * i ;

//     }
//     cout << fact << endl;
//     return 0;
// }
// int main ()
// {
//     int num ;
//     cin >> num;
//     factorial(num);
//     return 0 ; 
// }

// prime number hw 
int PrimeNumber(int n){
    if (n==0 && n == 1){
        cout<< "number is not a prime " << endl;

    }
    bool v=true;
   for(int i = 2  ; i <= n-1 ; i ++){
            if (n%2==0){ // we get the reminder
                v=false;
            }
           
   }
   return v ;
}

int main ()
{
    int num ;
    cin >> num;
    int z= PrimeNumber(num);
    if (z== false){
        cout<< "number is not a prime " << endl;
    }
    else{
         cout<< "number is  a prime " << endl;

    }
    return 0 ; 
}







