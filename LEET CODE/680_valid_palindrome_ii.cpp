/*
Given a string s, return true if the s can be palindrome after deleting at most one character from it.

 

Example 1:

Input: s = "aba"
Output: true
Example 2:

Input: s = "abca"
Output: true
Explanation: You could delete the character 'c'.
Example 3:

Input: s = "abc"
Output: false
*/
# include<iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isPalindrome(string s,int i,int j){
    while(i<j){
        if(s[i]!=s[j]) return false;
            i++;
            j--;
        }
    return true;
}
bool check(string s){
    int i =0;
    int j=s.size()-1;
    while(i<j){
        if(s[i]!=s[j]){
            return isPalindrome(s, i+1, j) || isPalindrome(s, i, j-1); // skip one element check this is palindrome or not 
        }
        i++;
        j--;
    }
    return true;
}
int main(){
    string str = "abca";
    cout<<check(str); 
}