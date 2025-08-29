# include<iostream>
using namespace std;
int power(int i,int p){ 
    if(p==0) return 1;
     return  i*power(i,p-1);
}
int main(){
    int a;
    cout<<"Enter base: ";
    cin>>a;
    int b;
    cout<<"Enter exponent: ";
    cin>>b;
    cout<<a<<" rais to the power "<<b<<" is "<<power(a,b);
}