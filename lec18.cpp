#include <iostream>
#include <vector>
#include <algorithm>   // REQUIRED for sort()

using namespace std;

int main() {
    vector<int> v;
     vector<vector <int> > z(5,vector<int>(9,1)); // vector 2 d aray 


    for (int i = 1; i <= 10; i++) {
        v.push_back(i);
    }

    sort(v.begin(), v.end()); 
    sort(v.rbegin(), v.rend());   

    for (auto val : v) {
        cout << val << " ";
    }

    return 0;

    // for 2d array 
    vector <vector <int> > z(5,vector<int>(9));
    for(int i = 0 ; i <3 ; i++){
        for(int j = 0 ; j>3 ; j++){
            cin>>z[i][j];
        }
    }
    for(int i = 0 ; i<3;i++){
        sort(z[i].begin(),z[i].end());
    }
}
