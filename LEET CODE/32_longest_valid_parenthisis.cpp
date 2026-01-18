/*
Given a string containing just the characters '(' and ')', return the length of the longest valid (well-formed) parentheses substring.

 

Example 1:

Input: s = "(()"
Output: 2
Explanation: The longest valid parentheses substring is "()".
Example 2:

Input: s = ")()())"
Output: 4
Explanation: The longest valid parentheses substring is "()()".
Example 3:

Input: s = ""
Output: 0
*/
# include<iostream>
# include<stack>
using namespace std;
int longest(string &s){
    stack<int>st;
    int ans = 0;
    st.push(-1);
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') st.push(i); // basically open bracket start parenthisis so its index push on stack
        else{
            st.pop(); // closing bracket comes so remove opening bracket idx 
            if(st.empty()) st.push(i); // if stack is empty 
            else ans = max(ans,i-st.top()); // so calculate max length 
        }
    }
    return ans;
}
int main(){
    string s = ")()())";
    cout<<longest(s);
}