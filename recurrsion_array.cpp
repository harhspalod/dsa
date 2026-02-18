#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int *p = new int(m);
    for(int i =0 ; i <m; i++){
        p[i]=i*2;
    }
    for(int i  = 0 ; i < m ; i++ ){
        *p=i*2;
        p++;
    }
    for(int i =0  ; i < m ; i ++){
        cout<<p[i]<<" ";
    }
    return 0;

}

// using recurrsion
void fun(int *a , int size){
    for(int i = 0; i < size; i ++){
        a[i]=i;

    }
}

int main(){
    int m;
    cin>>m;
    int *p= new int[m];
    fun(p,m);
    return 0;
}


// 2d array 
void fun(int **x,int row , int col){
    for(int i =0 ; i <row ; i++){
        for(int j =0 ; j< col ; j ++ )
{
        x[i][j]=i+j;
}    }

}
int main(){
    int n , m; // asking the row and column from the user itself
    cin>>n>>m;
    int  **p= new int *[n] ; /// now we have a pointer which is potinting towards one adderess of the array which can be accessed  by using ** 
    for(int i =0; i < n ; i++){
        p[i]=new int[m];
    }
    fun(p,n,m);
    return 0;
}