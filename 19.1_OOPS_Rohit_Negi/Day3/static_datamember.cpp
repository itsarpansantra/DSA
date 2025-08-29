# include<iostream>
using namespace std;

class customer{
    string name;
    int balance;
    int account_number;
    // static int total_customer; // create only one time and automatic  . its same for all class object (a1,a2...)

    public:
     static int total_customer;
    customer(string name,int balance,int account_number){
        this->name = name;
        this->balance=balance;
        this->account_number=account_number;
        total_customer++;
    }
    void display(){
        cout<<name<<" "<<balance<<" "<<account_number<<" "<<total_customer<<endl;
    }
    void display_total(){
        cout<<total_customer<<endl;
    }
};


int customer::total_customer=0;


int main(){
    customer a1("arpan",2000,3848);
    customer a2("souma",3000,3858);
    // a1.display();
    // a2.display();
    // bina total _customer k class likha access korbo
    customer::total_customer=3;
    a1.display_total();
}