# include<iostream>
using namespace std;
int main(){
    // int a=15;
    // int *ptr = &a;
    // int **p=&ptr;
    // cout<<a<<endl; // print 15
    // cout<<ptr<<endl;// print address of a
    // cout<<p<<endl; // print address of ptr
    int a=15;
    int *ptr = &a;
    int **p=&ptr;
    cout<<a<<endl; // print 15
    cout<<*ptr<<endl;// print 15
    cout<<**p<<endl; // print 15
}