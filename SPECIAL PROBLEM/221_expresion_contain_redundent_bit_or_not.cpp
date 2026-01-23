/*
Given a string of balanced expression s, check if it contains a redundant parenthesis or not. A set of parenthesis are redundant if the same sub-expression is surrounded by unnecessary or multiple brackets.
Note: Expression may contain + , - , *, and / operators. Given expression is valid and there are no white spaces present.

Examples:

Input: s = "((a+b))"
Output: true 
Explanation: ((a+b)) can reduced to (a+b).
Input: s = "(a+(b)/c)"
Output: true
Explanation: (a+(b)/c) can reduced to (a+b/c) because b is surrounded by () which is redundant.
Input: s = "(a+b+(c+d))"
Output: false
Explanation:(a+b+(c+d)) doesn't have any redundant or multiple brackets.
*/
# include<iostream>
# include<stack>
using namespace std;
bool check(string &s){
    stack<char>st;
    for(char ch:s){
        if(ch==')'){
            bool hasoperator = false;
            while(!st.empty() && st.top()!='('){
                char c = st.top();
                if(c=='+' || c=='-' || c=='*' || c=='/'){ // it means operator present in brackets so bracket is correct 
                    hasoperator = true; // if backet present or inside has no operator its redundent
                }
                st.pop();
            }
            st.pop() ;// delete '('opening bracket for next round check
            if(!hasoperator) return true;  // farzi bracket present but no operator 
        }
        else st.push(ch);
    }
    return false; // all correct no farzi bracket present 
}
int main(){
    string s = "(a+b+(c+d))";
    cout<<check(s);
}