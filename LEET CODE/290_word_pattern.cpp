/*
Given a pattern and a string s, find if s follows the same pattern.

Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s. Specifically:

Each letter in pattern maps to exactly one unique word in s.
Each unique word in s maps to exactly one letter in pattern.
No two letters map to the same word, and no two words map to the same letter.
 

Example 1:

Input: pattern = "abba", s = "dog cat cat dog"

Output: true

Explanation:

The bijection can be established as:

'a' maps to "dog".
'b' maps to "cat".
Example 2:

Input: pattern = "abba", s = "dog cat cat fish"

Output: false

Example 3:

Input: pattern = "aaaa", s = "dog cat cat dog"

Output: false
*/
# include<bits/stdc++.h>
using namespace std;
bool check_patern(string s , string str){
    stringstream ss(str);
    string temp;
    vector<string>v;
    while(ss>>temp){
        v.push_back(temp);
    }
    if(s.size()!=v.size()) return false;
    unordered_map<char,string>mp;
    unordered_set<string>st;
    for(int i=0;i<s.size();i++){
        char ch = s[i];
        string word = v[i];

        // if already map then check consistency
        if(mp.find(ch)!=mp.end()){
            if(mp[ch]!=word) return false; // if in a denote some again check a denote other one so return false 
        }
        else {
            // check if already mapped another one charector
            if(st.find(word)!=st.end()) return false;
            mp[ch] = word;
            st.insert(word);
        }
    }
    return true;
}
int main(){
    string s = "abba";
    string str = "dog cat cat dog";
    cout<<check_patern(s,str);
}