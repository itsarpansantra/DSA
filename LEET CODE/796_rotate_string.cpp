/*
Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

A shift on s consists of moving the leftmost character of s to the rightmost position.

For example, if s = "abcde", then it will be "bcdea" after one shift.
 

Example 1:

Input: s = "abcde", goal = "cdeab"
Output: true
Example 2:

Input: s = "abcde", goal = "abced"
Output: false
*/
# include<bits/stdc++.h>
using namespace std;
bool rotateString(string s,string goal){
    if(s.length() != goal.size()) return false;
    for(int i=0;i<s.size();i++){
        if(s==goal) return true;
        char ch = s[0];
        s = s.substr(1) +ch;
    }
    return false;
}
int main(){
    string s = "abcde";
    string goal = "cdeab";
    cout<<rotateString(string s ,string goal);
}