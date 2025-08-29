# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int a=1;
    int b=1;
    int sum=0;
    for(int i=1;i<=n-2;i++){ // loop 2 bar kom chalabo karon amra first 2 to term dhora nichi seta - korta hoba
        sum = a+b;
        a=b;
        b=sum;
    }
    cout<<b<<endl; // sum likhla 0 asba ar b likhla first 2 to term 1 asba 
}