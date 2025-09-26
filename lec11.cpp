#include<iostream>
using namespace std; 
int main()
{
    int n; // size
    cin >> n ; 
    int input_arr[n];
    for(int i=0 ; i<n ; i ++){

        cin >> input_arr[i];
    }

    int main_arr[n];
    for(int i=0 ; i<n ; i++){
        main_arr[i]=input_arr[i]*10;
    }

    for(int i=0 ; i<n ; i++){
        cout << main_arr[i];
    }

} // namespace std; 

