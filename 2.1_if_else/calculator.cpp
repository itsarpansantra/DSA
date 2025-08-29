# include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first digit: ";
    cin>>a;
    cout<<"Enter second digit: ";
    cin>>b;
    char op;//op=operator
    cout<<"Enter operator";
    cin>>op;
    switch(op){
         case '+':
            cout<<a+b;
            break;
         case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
         case '/':
            cout<<a/b;
            break;
    }
    return 0;
}