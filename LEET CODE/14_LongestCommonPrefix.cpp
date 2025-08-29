/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
*/
# include<iostream>
# include<vector>
# include<string>
# include<algorithm>
using namespace std;
class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            // vector<string>v;
            // v.push_back("flower");
            // v.push_back("flow");
            // v.push_back("flight");
            int n = strs.size();
            sort(strs.begin(),strs.end());
            string first = strs[0];
            string last = strs[n-1];
            string s = "";
            if(n==1) return strs[0];
            for(int i=0;i<min(first.size(),last.size());i++){
                if(first[i]==last[i]) s+=first[i];
                else return s;
            }
            return s;
        }
    };