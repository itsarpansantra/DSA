/*
You are given two strings, s1 and s2. Your task is to find the smallest substring in s1 such that s2 appears as a subsequence within that substring.

The characters of s2 must appear in the same sequence within the substring of s1.
If there are multiple valid substrings of the same minimum length, return the one that appears first in s1.
If no such substring exists, return an empty string.
Note: Both the strings contain only lowercase english letters.

Examples:

Input: s1 = "geeksforgeeks", s2 = "eksrg"
Output: "eksforg"
Explanation: "eksforg" satisfies all required conditions. s2 is its subsequence and it is smallest and leftmost among all possible valid substrings of s1.
Input: s1 = "abcdebdde", s2 = "bde" 
Output: "bcde"
Explanation:  "bcde" and "bdde" are two substring of s1 where s2 occurs as subsequence but "bcde" occur first so we return that.
Input: s1 = "ad", s2 = "b" 
Output: ""
Explanation: There is no substring exists.
*/
# include<iostream>
# include<vector>
# include<climits>
using namespace std;
string minWindow(string& s1, string& s2) {
        // Code here
        int n = s1.size(), m = s2.size();
        int minLen = INT_MAX, start = -1;
        int i = 0, j = 0;
        while (i < n) {
            if (s1[i] == s2[j]) {
                j++;
                if (j == m) {   // full match found
                    int end = i;
                    j--;        // move backward
                    int k = i;
                    
                    while (j >= 0) {
                        if (s1[k] == s2[j]) j--;
                        k--;
                    }
                    
                    k++; // actual start of window
                    
                    if (end - k + 1 < minLen) {
                        minLen = end - k + 1;
                        start = k;
                    }
                    
                    i = k;  // continue from next position
                    j = 0;
                }
            }
            i++;
        }
        
        if (start == -1) return "";
        return s1.substr(start, minLen);
}
int main(){
    string s1 = "geeksforgeeks";
    string s2 = "eksrg";
    cout<<minWindow(s1,s2);
}