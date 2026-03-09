/*
Given a string s, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string.

Return the sorted string. If there are multiple answers, return any of them.

 

Example 1:

Input: s = "tree"
Output: "eert"
Explanation: 'e' appears twice while 'r' and 't' both appear once.
So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.
Example 2:

Input: s = "cccaaa"
Output: "aaaccc"
Explanation: Both 'c' and 'a' appear three times, so both "cccaaa" and "aaaccc" are valid answers.
Note that "cacaca" is incorrect, as the same characters must be together.
Example 3:

Input: s = "Aabb"
Output: "bbAa"
Explanation: "bbaA" is also a valid answer, but "Aabb" is incorrect.
Note that 'A' and 'a' are treated as two different characters.
*/
# include<iostream>
# include<unordered_map>
# include<algorithm>
# include<vector>
using namespace std;
string sort_frequency(string str){

    // store in map with frequency
    unordered_map<char,int>mp;

    for(char c:str){
        mp[c]++;
    }

    // store in vector with pair
    vector<pair<int,char>>v;

    for(auto a:mp){
        v.push_back(a.second,a.first);
    }

    // sort desending order
    sort(v.begin(),v.end(),greater<pair<int,char>>());

    string ans ="";

    for(auto ch: v){
        int freq = ch.first;
        char c = ch.second;
        ans+= string(freq,c);
    }
    return ans;
}
int main(){
    string str = "cccaaa";
    cout<<sort_frequency(str);
}