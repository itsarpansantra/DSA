# include<iostream>
using namespace std;

class customer{
    string name;
    int *balance;
    public:
    // constructor
    customer(string name , int bal){
        this->name = name;
        balance = new int;
        *balance=bal;

    }
    // destructor . create only one time 
    ~ customer(){
        cout<<"name"<<" ";
    }

};

int main(){
    customer a1("name",1000);
}