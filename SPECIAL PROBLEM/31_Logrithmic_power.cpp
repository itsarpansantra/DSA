// logrithmic power means 2^5 to aka vanga vanga likhbo time complexity km hoba
# include<iostream>
using namespace std;
int power(int a,int b){ 
    if(b==1) return a;
    int ans = power(a,b/2);
    if(b%2==0) return ans * ans;
    else return ans*ans*a;
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