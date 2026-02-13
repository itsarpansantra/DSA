/*
You are given a string s and an integer k, a k duplicate removal consists of choosing k adjacent and equal letters from s and removing them, causing the left and the right side of the deleted substring to concatenate together.

We repeatedly make k duplicate removals on s until we no longer can.

Return the final string after all such duplicate removals have been made. It is guaranteed that the answer is unique.

 

Example 1:

Input: s = "abcd", k = 2
Output: "abcd"
Explanation: There's nothing to delete.
Example 2:

Input: s = "deeedbbcccbdaa", k = 3
Output: "aa"
Explanation: 
First delete "eee" and "ccc", get "ddbbbdaa"
Then delete "bbb", get "dddaa"
Finally delete "ddd", get "aa"
Example 3:

Input: s = "pbbcggttciiippooaais", k = 2
Output: "ps"
*/
# include<iostream>
# include<stack>
using namespace std;
string duplicate_string(string s,int k){
    stack<pair<char,int>>st;
    for(char ch:s){
        if(!st.empty() && st.top().first==ch) {
            st.top().second++; // same charector so frequency inc
        }
        else st.push({ch,1}); // neither normal push

        // now frequency same to same in k
        if(st.top().second==k){
            st.pop();
        }
    }
    // now remaining element in stack
    string ans ="";
    while(!st.empty()){
        int freq = st.top().second;
        char c = st.top().first;
        st.pop();
        while(freq--){
            ans = c+ans;
        }
    }
    return ans;
}
int main(){
    string s = "deeedbbcccbdaa";
    int k =3;
    cout<<duplicate_string(s,k);
}