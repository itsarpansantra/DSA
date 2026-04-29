/*
Given a string s, return the lexicographically smallest subsequence of s that contains all the distinct characters of s exactly once.

 

Example 1:

Input: s = "bcabc"
Output: "abc"
Example 2:

Input: s = "cbacdcbc"
Output: "acdb"
*/
#include<bits/stdc++.h>
using namespace std;
string subsequence(strng str){
    vector<int>freq(26,0);
    vector<bool>visited(26,false);
    for(char ch:s) freq[ch-'a']++;
    stack<char>st;

    for(char ch:s){
        freq[ch-'a']--;
        if(visited[ch-'a']) continue;

        while(!st.empty() && st.top()>ch && freq[st.top()-'a']>0){
            visited[st.top() - 'a'] = false;
            st.pop();
        }
        st.push(ch);
        visited[st.top() - 'a'] = true;
    }
    string ans ="";
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    string str = "cbacdcbc";
    cout<<subsequence(str);
}