# include<iostream>
using namespace std;

class customer{
    string name;
    int balance,acc_number;
    static int total_customer;
    static int total_balance;

    public:
    customer(string name, int balance , int acc_number){
        this->name = name;
        this->balance=balance;
        this->acc_number=acc_number;
        total_customer++;
        total_balance+=balance;
    }

    void deposite(int amount){
        if(amount>0){
            balance+=amount;
            total_balance+=amount;
        }
    }

    void withdraw(int amount){
        if(amount>0 && amount<=balance){
            balance-=amount;
            total_balance-=balance;
        }
    }

    static void  accessStatic(){ //static number function . only access static . name acc_number agulo access korta parba na
        cout<<"Total customer in bank: "<<total_customer<<endl;
        cout<<"Total balance in bank: "<<total_balance<<endl;
    }
};

int customer::total_customer=0;
int customer::total_balance=0;

int main(){
    customer a1("arpan",1000,3547);
    customer a2("souma",2000,39547);
    customer a3("Deblina",3500,7547);
    customer a4("Sanju",10400,35747);
    a1.deposite(450);
    a2.withdraw(800);

    customer::accessStatic();
}