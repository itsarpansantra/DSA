/*
You are given a string s that consists of lower case English letters and brackets.

Reverse the strings in each pair of matching parentheses, starting from the innermost one.

Your result should not contain any brackets.

 

Example 1:

Input: s = "(abcd)"
Output: "dcba"
Example 2:

Input: s = "(u(love)i)"
Output: "iloveu"
Explanation: The substring "love" is reversed first, then the whole string is reversed.
Example 3:

Input: s = "(ed(et(oc))el)"
Output: "leetcode"
Explanation: First, we reverse the substring "oc", then "etco", and finally, the whole string.
*/
# include<iostream>
# include<string>
# include<stack>
using namespace std;
string reverse_between(string s){
    stack<char>st;
    for(char c:s){
        if(c==')'){ 
            string str="";
            //pop all and add 
            while(!st.empty() && st.top()!='('){
                str+=st.top();
                st.pop();
            }
            // then remove '('
            st.pop();

            // again push in reverse order
            for(char ch:str){
                st.push(ch);
            }
        }
        else st.push(c);
    }
    string result="";
    while(!st.empty()){
        result=st.top()+result;
        st.pop();
    }
    return result;
}
int main(){
    string s = "(ed(et(oc))el)";
    cout<<reverse_between(s);
}