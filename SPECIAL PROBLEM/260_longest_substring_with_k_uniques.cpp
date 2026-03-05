/*
You are given a string s consisting only lowercase alphabets and an integer k. Your task is to find the length of the longest substring that contains exactly k distinct characters.

Note : If no such substring exists, return -1. 

Examples:

Input: s = "aabacbebebe", k = 3
Output: 7
Explanation: The longest substring with exactly 3 distinct characters is "cbebebe", which includes 'c', 'b', and 'e'.
Input: s = "aaaa", k = 2
Output: -1
Explanation: There's no substring with 2 distinct characters.
Input: s = "aabaaab", k = 2
Output: 7
Explanation: The entire string "aabaaab" has exactly 2 unique characters 'a' and 'b', making it the longest valid substring.
*/
#include<iostream>
# include<unordered_map>
using namespace std;
int substring(string s,int k){
    unordered_map<char,int> mp;
    int left = 0;
    int ans = -1;

    for(int right = 0; right < s.size(); right++) {
        mp[s[right]]++;

        while(mp.size() > k) {
            mp[s[left]]--;
            if(mp[s[left]] == 0)
                mp.erase(s[left]);
            left++;
        }
        if(mp.size() == k) {
            ans = max(ans, right - left + 1);
        }
    }
    return ans;
}
int main(){
    string s = "aabacbebebe";
    int k=3;
    cout<<substring(s,k);
}