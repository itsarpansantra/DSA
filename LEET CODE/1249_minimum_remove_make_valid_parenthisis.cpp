/*
Given a string s of '(' , ')' and lowercase English characters.

Your task is to remove the minimum number of parentheses ( '(' or ')', in any positions ) so that the resulting parentheses string is valid and return any valid string.

Formally, a parentheses string is valid if and only if:

It is the empty string, contains only lowercase characters, or
It can be written as AB (A concatenated with B), where A and B are valid strings, or
It can be written as (A), where A is a valid string.
 

Example 1:

Input: s = "lee(t(c)o)de)"
Output: "lee(t(c)o)de"
Explanation: "lee(t(co)de)" , "lee(t(c)ode)" would also be accepted.
Example 2:

Input: s = "a)b(c)d"
Output: "ab(c)d"
Example 3:

Input: s = "))(("
Output: ""
Explanation: An empty string is also valid.
*/
# include<iostream>
# include<stack>
# include<algorithm>
using namespace std;
string parentheses(string s){
    stack<char>st;
    int i =0;
    int fb = 0; // first backet count
    while(i<s.size()){
        if(s[i]==')'){
            if(fb==0) i++;
            else {
                fb--; // closeing coresponding present opening bracket
                st.push(')'); 
                i++;
            }
        }
        else if(s[i]=='('){ 
            fb++; // inc opening bracket and push
            st.push('(');
            i++;
        }
        else {
            st.push(s[i]); // normal element push 
            i++;
        }
    }
    string ans="";
    while(!st.empty()){
        if(fb>0 && st.top()=='('){ // suppose opening bracket for these reason
            fb--;
            st.pop();
            continue;
        }
        ans+=st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    string s = "lee(t(c)o)de)";
    cout<<parentheses(s);
}