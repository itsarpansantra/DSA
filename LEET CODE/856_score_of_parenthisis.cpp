/*
Given a balanced parentheses string s, return the score of the string.

The score of a balanced parentheses string is based on the following rule:

"()" has score 1.
AB has score A + B, where A and B are balanced parentheses strings.
(A) has score 2 * A, where A is a balanced parentheses string.
 

Example 1:

Input: s = "()"
Output: 1
Example 2:

Input: s = "(())"
Output: 2
Example 3:

Input: s = "()()"
Output: 2
*/
# include<iostream>
# include<stack>
using namespace std;
int score(string s){
    stack<int>st;
    st.push(0);
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') st.push(0);
        else{
            int p = st.top();
            st.pop();
            int add = max(2*p,1);
            st.top()+=add;
        }
    }
    return st.top();
}
int main(){
    string s = "()()";
    cout<<score(s);
}