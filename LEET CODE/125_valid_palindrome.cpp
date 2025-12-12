/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
*/
# include<iostream>
#include <string>
#include <algorithm>
using namespace std;
bool check(string str){
    string s="";
    for(int i=0;i<str.size();i++){
        char ch = str[i];
        if(isalnum(ch)){ // remove all special charector
           ch=tolower(ch); // ar ata upercase thaka lower case convert kore
            s+=ch;
        }
    }
    // int i=0;
    // int j=s.size()-1;
    // bool flag = false;
    // while(i<j){
    //     if(s[i]==s[j]){
    //         i++;
    //         j--;
    //         flag=true;
    //     }
    //     else return false;
    // }
    // return flag;
    string rev = s;
    reverse(rev.begin(),rev.end());
    return rev==s;
}
int main(){
    string str="A man, a plan, a canal: Panama";
    cout<<check(str);
}