/*
Given an integer n, return true if it is a power of four. Otherwise, return false.

An integer n is a power of four, if there exists an integer x such that n == 4x.

 

Example 1:

Input: n = 16
Output: true
Example 2:

Input: n = 5
Output: false
*/
# include<iostream>
# include<cmath>
using namespace std;
bool check(int n){
    int real_n = n;
    int count =0;
    while(n>1){
        if(n%4==0) count++;
        n/=4;
    }
    int x = pow(4,count);
    if(real_n==x) return true;
    else return false;
}
int main(){
    int n ;
    cout<<"Enter n: ";
    cin>>n;
    cout<<check(n);
}