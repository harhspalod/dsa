#include <iostream>
#include <string.h>
using namespace std;
 
bool areRotations(string &s1, string &s2) {
        // code here
        if(s2.length()!=s1.length()){
            return false;
        }
        int end = s2.length()-1;
        for(int i = 0 ; i < 2 ;i++){
            swap(s2[i],s2[end]);
            end--;
        }
        if(s1==s2){
            return true;
        }
        return false;
    }
int main(){
    
}