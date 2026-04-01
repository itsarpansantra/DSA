/*
Given an integer num, return a string of its base 7 representation.

 

Example 1:

Input: num = 100
Output: "202"
Example 2:

Input: num = -7
Output: "-10"
*/
# include<bits/stdc++.h>
using namespace std;
string base7(int n){
    if(num==0) return "0";
    int temp = num;
    string ans="";
    if(temp<0) temp = -temp;
    while(temp>0){
        int rem = temp%7;
        ans+=(rem+'0');
        temp/=7;
    }
    reverse(ans.begin(),ans.end());
    if(num<0) ans = "-"+ans;
    return ans;
}
int main(){
    int n = 100;
    cout<<base7(n);
}