// An ugly number is a positive integer which does not have a prime factor other than 2, 3, and 5.

// Given an integer n, return true if n is an ugly number.

// basically 2,3,5 dia vag korla 1 ala return true . nahola false
# include<iostream>
using namespace std;
bool ugly(int n){
    if(n==0) return false;
    while(n%2==0) n/=2;
    while(n%3==0) n/=3;
    while(n%5==0) n/=5;
    return (n==1); // ai statement r mana n==1 hola true nahola false
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<ugly(n);
}