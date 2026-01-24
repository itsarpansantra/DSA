/*
Two strings are considered close if you can attain one from the other using the following operations:

Operation 1: Swap any two existing characters.
For example, abcde -> aecdb
Operation 2: Transform every occurrence of one existing character into another existing character, and do the same with the other character.
For example, aacabb -> bbcbaa (all a's turn into b's, and all b's turn into a's)
You can use the operations on either string as many times as necessary.

Given two strings, word1 and word2, return true if word1 and word2 are close, and false otherwise.

 

Example 1:

Input: word1 = "abc", word2 = "bca"
Output: true
Explanation: You can attain word2 from word1 in 2 operations.
Apply Operation 1: "abc" -> "acb"
Apply Operation 1: "acb" -> "bca"
Example 2:

Input: word1 = "a", word2 = "aa"
Output: false
Explanation: It is impossible to attain word2 from word1, or vice versa, in any number of operations.
Example 3:

Input: word1 = "cabbba", word2 = "abbccc"
Output: true
Explanation: You can attain word2 from word1 in 3 operations.
Apply Operation 1: "cabbba" -> "caabbb"
Apply Operation 2: "caabbb" -> "baaccc"
Apply Operation 2: "baaccc" -> "abbccc"
*/
# include<iostream>
# include<string>
# include<unordered_map>
# include<unordered_set>
using namespace std;
bool check(string str,string s){
    if(str.size()!=s.size()) return false;

    unordered_map<char,int>mp1,mp2; // i create 2 map
    for(char ch : str){
        mp1[ch]++; // lexographically put str element with frequency in map1
    }
    for(char ch : s){
        mp2[ch]++; // lexographically put s element with frequency in map2
    }

    // for(int i=0;i<s.size();i++){ // another approach to write
    //     mp1[str[i]]++;
    //     mp2[s[i]]++;
    // }

    for(auto x : mp1){
        char ch = x.first;
        if(mp2.find(ch)==mp2.end()) return false; // it's mean mp1 element not present on mp2  
    }

    unordered_map<int,int>h1,h2; // helper1 and helper2
    for(auto x : mp1){
        int freq = x.second;
        h1[freq]++; // increase frequency
    }

    for(auto x:mp2){
        int freq = x.second;
        h2[freq]++;
    }

    // compare h1 and h2 both are same or not
    for(auto x : h1){
        int key = x.first;
        if(h2.find(key)==h2.end()) return false; // it's mean h1 element not present on h2  
        if(h2[key]!= h1[key]) return false; // if key of frequency not same so return false 
    }
    return true;
}
int main(){
    string str = "aabbcddde";
    string s = "eeddcccab";
    cout<<check(str,s);
}