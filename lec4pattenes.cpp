#include<iostream>
using namespace std;
// 1 1 1 1 1 
// 1 1 1 1 1 
// 1 1 1 1 1 
// 1 1 1 1 1 
// 1 1 1 1 1 

int main() {
    int n;
    cin >> n;  

//     for (int i = 0; i < n; i++) {         
//         for (int j = 0; j < 5; j++) {     
//             cout << "1 ";
//         }
//         cout << endl;
//     }



// // 12345
// // 12345
// // 12345
// // 12345
// // 12345

//     for(int i = 1; i <= n ; i++){
//         for(int j = 1 ; j<=n;j++){
//             cout << j;
//         }
//         cout << endl;

//     }

// 54321
// 54321
// 54321
// 54321
// 54321
// 5 - j + 1

    // for(int i = 1; i <= n ; i++){
    //     for(int j = n ; j>=1;j--){
    //         cout << j;
    //     }
    //     cout << endl;

    // }
// 12345
// 678910
// 1112131415
// 1617181920
// 2122232425
    // int count=1;
    // for(int i = 1; i <= n ; i++){
    //     for(int j = 1 ; j<=n;j++){
    //         cout << count ; 
    //         count = count +1;
    //     }
    //     cout << endl;

// }
// 1
// 11
// 111
// 1111
// 11111


    
    // for(int i = 1; i <= n ; i++){
    //     for(int j = 1 ; j<=i;j++){
    //         cout << "*" << " ";
    //     }
    //     cout << endl;

    // }
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 

    //  for(int i = 1; i <= n ; i++){
    //     for(int j = 1 ; j<=i;j++){
    //         cout << j << " ";
    //     }
    //     cout << endl;

    // }
// a a a a a 
// b b b b b 
// c c c c c 
// d d d d d 
// e e e e e 

       for(int i = 0; i <n ; i++){
        char main ='a'+i;
        for(int j = 1 ; j<=n;j++){
            cout << main << " ";
        }
        cout << endl;
        

    }

// a 
// a b 
// a b c 
// a b c d

       for(int i = 0; i <n ; i++){
        for( int j = 1 ; j<=i;j++){
            char main ='a'+j-1;

            cout << main << " ";
        }
        cout << endl;

// 1 2 3 4 5 
//   2 3 4 5


        

    }



    return 0;
}
