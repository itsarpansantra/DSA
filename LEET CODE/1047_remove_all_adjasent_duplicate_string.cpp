/*
You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.

We repeatedly make duplicate removals on s until we no longer can.

Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.

 

Example 1:

Input: s = "abbaca"
Output: "ca"
Explanation: 
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".
Example 2:

Input: s = "azxxzy"
Output: "ay"
*/
# include<iostream>
# include<algorithm>
# include<stack>
using namespace std;
string duplicate(string str){
    stack<char>st;
    for(int i=0;i<str.size();i++){
        if(!st.empty() && st.top()==str[i]) st.pop();
        else st.push(str[i]);
    }
    string ans = "";
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    reverse (ans.begin(),ans.end());
    return ans;
}
int main(){
    string str = "abbaca";
    cout<<duplicate(str);
}