# include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int *ptr =&a;
    int *ptr1=&b;
    int ans;
    int *ptr2 =&ans;
    *ptr2 =(*ptr)*(*ptr1);
    cout<<*ptr2;
}