# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int a=1,b=1,fibo;
    cout<<"first fibonacci number is: "<<a<<endl;
    cout<<"second fibonacci number is: "<<b<<endl;
    for(int i=3;i<=n;i++){
        fibo=a+b;
        a=b;
        b=fibo;
        cout<<i<<"th fibonacci number of "<<fibo<<endl;
    }
}