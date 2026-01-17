/*
You are given two strings s1 and s2, of equal lengths. The task is to check if s2 is a rotated version of the string s1.

Note: A string is a rotation of another if it can be formed by moving characters from the start to the end (or vice versa) without rearranging them.

Examples :

Input: s1 = "abcd", s2 = "cdab"
Output: true
Explanation: After 2 right rotations, s1 will become equal to s2.
Input: s1 = "aab", s2 = "aba"
Output: true
Explanation: After 1 left rotation, s1 will become equal to s2.
Input: s1 = "abcd", s2 = "acbd"
Output: false
Explanation: Strings are not rotations of each other.
*/
# include<iostream>
# include<string>
using namespace std;
bool rotation(string s1,string s2){
    if(s1.size()!=s2.size()) return false;
    string temp = s1+s1; // add kore dilam
    return temp.find(s2) <temp.size(); // jodi substring hoy to true else false
}
int main(){
    string s1 = "abcd";
    string s2 = "cdab";
    cout<<rotation(s1,s2);
}