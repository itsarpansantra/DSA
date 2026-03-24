/*
Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.

 

Example 1:

Input: ransomNote = "a", magazine = "b"
Output: false
Example 2:

Input: ransomNote = "aa", magazine = "ab"
Output: false
Example 3:

Input: ransomNote = "aa", magazine = "aab"
Output: true
 
*/
# include<bits/stdc++.h>
using namespace std;
bool Ransom(string str,string s){
    unordered_map<char,int>mp;
    for(char ch:s){
        mp[ch]++;
    }
    for(char c:str){
        if(mp.find(c)!=mp.end()){
            mp[ch]--;
            if(mp[c]==0) mp.erase(c);
        }
        else return false;
    }
    return true;
}
int main(){
    string str = "aa";
    string s = "aab";
    cout<<Ransom(str,s);
}