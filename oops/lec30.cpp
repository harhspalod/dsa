#include <iostream>
using namespace std;
class student{
    public:
    int roll;
    string Name;
    string Branch;
};
int main() {
    // Write C++ code here
    student object;
    object.roll=1123;
    object.Name="harsh";
    object.Branch="aiml";
    cout<<object.roll;
    return 0;
}

#include <iostream>
using namespace std;
class student{
    public:
    int roll;
    string Name;
    string Branch;
};
class Bank{
    private:
    int balance;
    string Name;
    public:
    void SetValue(int amount , string names,int password){
        if(names=="harsh" && password==123){
            balance =  amount;
            Name = names;
        }
        // balance =  amount;
        // Name = names;
    };
    void check_balance(){
        cout<<balance<<" ";
    };
    void withdraw(){
        balance-=100;
        cout<<"100 rs taken";
    };
};


int main() {
    // Write C++ code here
    // student object;
    // object.roll=1123;
    // object.Name="harsh";
    // object.Branch="aiml";
    // cout<<object.roll;
    Bank obj;
    obj.SetValue(100,"harsh",123);
    obj.check_balance();
    obj.withdraw();
    obj.check_balance();
    
    return 0;
}



