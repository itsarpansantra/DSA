# include<iostream>
using namespace std;
int main(){
    // how to use a value
    // int x= 12;
    // int *ptr = &x;
    // cout<<*ptr;
    // who to update value
    int x= 122;
    int *ptr =&x;
    cout<<x<<endl;
    *ptr = 25;
    cout<<x;
}