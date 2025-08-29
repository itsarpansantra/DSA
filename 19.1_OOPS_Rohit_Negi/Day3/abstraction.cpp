# include<iostream>
using namespace std;
class customer{
    string name;
    int age,balance;
    
    public:
    customer(string name , int age, int balance){
        this->name=name;
        this->age=age;
        this->balance=balance;
    }
    void deposite(int amount){
        if(amount>0){
            balance+=amount;
        }
    }

    void withdraw(int amount){
        if(amount>0 && amount<=balance){
            balance-=amount;
        }
    }
    void display(){

        cout<<name<<" "<<age<<" "<<balance;
    }
};
int main(){
    customer a1("arpan",21,2000);
    customer a2("Souma",22,2500);
    customer a3("Deblina",21,3000);
    
    a1.display();
}