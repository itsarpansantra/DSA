/*
Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

 

Example 1:

Input: s = "leetcode"

Output: 0

Explanation:

The character 'l' at index 0 is the first character that does not occur at any other index.

Example 2:

Input: s = "loveleetcode"

Output: 2

Example 3:

Input: s = "aabb"

Output: -1
*/
# include<bits/stdc++.h>
using namespace std;
int unique_charector_index(string str){
    vector<int>v(26,0);
    int idx =-1;
    for(int i=0;i<s.size();i++){
        char ch = s[i];
        int num = (int)ch;
        v[num-97]++;
    }

    for(int i=0;i<s.size();i++){
        char ch = s[i];
        int num = (int)ch;
        if (v[num-97]==1) return i;
    }
    return -1;
}
int main(){
    string str;
    cout<<"Enter string : ";
    gwtline(cin,str);
    cout<<unique_charector_index(str);
}