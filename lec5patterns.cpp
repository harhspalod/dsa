#include <iostream>
using namespace std;
int main (){
//     *
//    ***
//   *****
//  *******
// *********

    // int n;
    // cin >> n;
    // for(int i = 1 ; i <= n ; i ++){
    //     // blank space 
    //     for (int space = 1 ; space <= n - i ; space ++ ){
    //         cout << " "; 
    //     }
    //     for ( int j =1  ; j <= 2*i-1; j ++){
    //         cout<< "*" ;
        
    //     }
    //     cout << endl;

            
    //     } 

//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 

    // int m;
    // cin >> m ;
    // for ( int i =  1 ; i<= m ; i++){
    //     for ( int s= 1 ; s <= m-i;s++){
    //         cout<< " ";

    //     }
    //     for ( int j = 1 ; j <= i ; j++ ){
    //         cout << "*"<<" ";
    //     }
    //     cout<<endl;
    // }
// 12345
//  2345
//   345
//    45
//     5

    // int n;
    // cin >> n ;
    // for (int i = 1 ; i <=n ; i++){
    //     for (int s = 1 ; s <= i-1;s++){
    //         cout << " ";
    //     }
    //              cout << endl;

        
    //   for (int j = i; j <= n; j++) { //  j is number of row 
    //         cout << j<<" ";
    //     }

    // }


// *****
//  ****
//   ***
//    **
//     *

        // int m ; 
        // cin >> m ; 
        // for (int i = 1; i <=m ; i ++ ){
        //     for (int s=1;s<=i-1;s++){
        //         cout<<" ";
        //     }
        //     for(int j = 1; j<=m-i+1; j++ ){
        //         cout<<"*"<<" ";
        //     }
        //                      cout << endl;


        // }


/// most important question do daily practice 
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *

        int n ;
        cin >> n;
        for ( int i = 1 ; i <=n ; i++){
                        for( int j = 1 ; j<= i ; j++){
                            cout<<"*";
                        }  
                        for(int s = 1 ; s<= 2*n-2*i;s++){
                            cout<<" ";
                        }
                        for(int k = 1 ; k<=i ; k++){
                            cout<<"*";
                        }      
                        cout<<endl;
                       
        }
               for(int i= 1  ; i <= n ; i++){
                for (int j = 1 ; j <= n-i;j++){
                    cout<<"*";
                }
                for(int s = 1 ; s<=  2*n-(2*n-2*i);s++){
                    
                             cout<<" ";
                   
                   
                }
                for (int j = 1 ; j <= n-i;j++){
                    cout<<"*";
                }
                cout<<endl;
               }
    

         }
