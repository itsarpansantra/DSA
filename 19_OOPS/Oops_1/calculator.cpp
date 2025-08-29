# include<iostream>
using namespace std;
class calculator{
    public:
    int a; // Data Member
    int b;
    void add(){ // member function
        cout<<"Addition value is : "<<a+b<<endl;
    }
    void sub(){
        cout<<"substraction value is : "<<a-b<<endl;
    }
    void mul(){
        cout<<"Multiplication value is : "<<a*b<<endl;
    }
    void divi(){
        cout<<"Division value is : "<<a/b<<endl;
    }
};
int main(){
    calculator cal;
    cal.a=10;
    cal.b=5;
    cal.add();
    cal.sub();
    cal.mul();
    cal.divi();
}