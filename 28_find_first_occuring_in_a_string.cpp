/*
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

 

Example 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
Example 2:

Input: haystack = "leetcode", needle = "leeto"
Output: -1
*/
#include<iostream>
using namespace std;
int check(string haystack,string needle){
    int m = haystack.size(), n = needle.size();
        for (int i = 0; i + n <= m; i++) {
            if (haystack.substr(i, n) == needle)return i;
        }
    return -1; 
}
int main(){
    string haystack = "sadbutsad";
    string needle = "sad";
    cout<<check(haystack,needle);
}