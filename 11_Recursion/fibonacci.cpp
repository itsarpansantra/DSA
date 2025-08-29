# include<iostream>
using namespace std;
int fibo(int p){
    if(p==1 || p==2) return 1;
    return fibo(p-1)+fibo(p-2);  
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<fibo(n);   
}