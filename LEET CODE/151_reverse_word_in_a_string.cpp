/*
Given an input string s, reverse the order of the words.

A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

Return a string of the words in reverse order concatenated by a single space.

Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

 

Example 1:

Input: s = "the sky is blue"
Output: "blue is sky the"
Example 2:

Input: s = "  hello world  "
Output: "world hello"
Explanation: Your reversed string should not contain leading or trailing spaces.
Example 3:

Input: s = "a good   example"
Output: "example good a"
Explanation: You need to reduce multiple spaces between two words to a single space in the reversed string.
*/
# include<iostream>
# include<vector>
# include<string>
# include<algorithm>
using namespace std;
string reverse_word(string s){
    stringstream ss(s);
    vector<string>v;
    string temp;
    while(ss>>temp){
        v.push_back(temp);
    }
    reverse(v.begin(),v.end());
    string ans = v[0];
    for(int i=1;i<v.size();i++){
        ans+=" "+v[i];
    }
    return ans;
}
int main(){
    string s = "a good   example";
    cout<<reverse_word(s);
}