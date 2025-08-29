# include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter third number: ";
    cin>>c;
    if(a>b && a>c){
        cout<<"a is greater";
    }
    else if(b>c && b>a){
        cout<<"b is greater";
    }
    else if(c>b && c>a){
        cout<<"c is greater";
    }
}