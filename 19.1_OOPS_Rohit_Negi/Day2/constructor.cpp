# include<iostream>
using namespace std;
    class customer{
        string name;
        int account_number;
        int balance;
        public:
        // constructor overloading  beacuse constructor same but depend on parameter.
        customer(){
            // cout<<"This is My defoult Constructor.";
            name = "Arpan";
            account_number=3848;
            balance=2000;
        }
      // parameterized constructor
        // customer(string name , int account_number , int balance){
        //     this->name = name;
        //     this->account_number=account_number;
        //     this->balance=balance;
        //     // this keyword use to store object address
        // }

        // inline constructor
        inline customer(string a , int b,int c):name(a),account_number(b),balance(c){}

        
        void display(){
            cout<<name<<" "<<account_number<<" "<<balance<<endl;
        }

        // copy constructor
        customer(customer &b){
            name= b.name ;
            account_number = b.account_number;
            balance = b.balance;
        }
    };
int main(){
  customer c1("Arpan",384873,20000); // see which constructor get 3 parametr go this constructor
  customer c2;
  c1.display();
  c2.display();
//   customer c3(c1); // default copy constructor 
//   c3.display(); 

  customer c4(c2); // copy constructor
  c4.display();

  //another method
  customer c5;
  c5=c2; // assignn the value
  c5.display();
}