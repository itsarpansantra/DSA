# include<iostream>
using namespace std;
int main(){
    // int a=4,b=6;
    // int *ptr=&a;
    // int *ptr1=&b;
    // int sum = *ptr+*ptr1;
    // cout<<sum;
    // user input by pointer
    int a,b;
    int *ptr=&a;
    int *ptr1=&b;
    cout<<"Enter first number: ";
    cin>>*ptr;
    cout<<"Enter second number: ";
    cin>>*ptr1;
    cout<<*ptr+*ptr1;

}