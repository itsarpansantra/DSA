/*
Given two strings s and p. Find the smallest substring in s consisting of all the characters (including duplicates) of the string p. Return empty string in case no such substring is present.
If there are multiple such substring of the same length found, return the one with the least starting index.

Examples:

Input: s = "timetopractice", p = "toc"
Output: "toprac"
Explanation: "toprac" is the smallest substring in which "toc" can be found.
Input: s = "zoomlazapzo", p = "oza"
Output: "apzo"
Explanation: "apzo" is the smallest substring in which "oza" can be found.
Input: s = "zoom", p = "zooe"
Output: ""
Explanation: No substring is present containing all characters of p.
*/
# include<iostream>
# include<vector>
# include<algorithm>
# include<unordered_map>
# include<climits>
using namespace std;
string smallest_substring(string s,string p){
    unordered_map<char,int> mp;
    for(char c : p) mp[c]++;
    int count = p.size();
    int left = 0, minLen = INT_MAX, start = 0;
    for(int right = 0; right < s.size(); right++) {
        if(mp[s[right]] > 0) count--;
        mp[s[right]]--;
        while(count == 0) {
            if(right - left + 1 < minLen) {
                minLen = right - left + 1;
                start = left;
            }
            mp[s[left]]++;
            if(mp[s[left]] > 0)
                count++;
            left++;
        }
    }
    if(minLen == INT_MAX) return "";
    return s.substr(start, minLen);
}
int main(){
    string s = "timetopractice";
    string p = "toc";
    cout<<smallest_substring(s,p);
}