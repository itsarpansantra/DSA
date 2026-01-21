/*
Given a string s, remove duplicate letters so that every letter appears once and only once. You must make sure your result is the smallest in lexicographical order among all possible results.

 

Example 1:

Input: s = "bcabc"
Output: "abc"
Example 2:

Input: s = "cbacdcbc"
Output: "acdb"
 
*/
# include<iostream>
# include<stack>
using namespace std;
string remove_duplicate(){
    vector<int> freq(26, 0);
    vector<bool> visited(26, false);
    stack<char> st;

    // Count frequency
    for(char c : s) freq[c - 'a']++;

    for(char c : s) {
        int idx = c - 'a';
        freq[idx]--;

        if(visited[idx]) continue;

        while(!st.empty() && st.top() > c && freq[st.top() - 'a'] > 0) {
            visited[st.top() - 'a'] = false;
            st.pop();
        }

        st.push(c);
        visited[idx] = true;
    }

    // Build answer
    string ans = "";
    while(!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(), ans.end());

    return ans;
}
int main(){
    string str="bcabc";
    cout<<remove_duplicate(str);
}