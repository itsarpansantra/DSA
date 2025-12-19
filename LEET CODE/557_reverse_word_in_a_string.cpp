/*
Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

 

Example 1:

Input: s = "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"
Example 2:

Input: s = "Mr Ding"
Output: "rM gniD"
*/
# include<iostream>
# include<algorithm>
# include<string>
# include<vector>
# include<sstream>
using namespace std;
string reverse_string(string s){
    stringstream ss(s);
    string temp;
    vector<string>v;
    while(ss>>temp){
        v.push_back(temp);
    }
    string str ="";
    for(int i=0;i<v.size();i++){
        string p = v[i];
        reverse(p.begin(),p.end());
        str = str+p+" ";
    }
    if(str.size()!=0){
        str.pop_back();
    }
    return str;
}
// efficient proceess . low TLE
// string reverseWords(string s) {
//         int n = s.size();
//         int j = 0;
//         for (int i=0;i<= n;i++) {
//             if (i == n || s[i] == ' ') {
//                 reverse(s.begin() +j, s.begin() + i); // reverse word
//                 j = i + 1; // move to next word
//             }
//         }
//         return s;
//     }
int main(){
    string s ="Let's take LeetCode contest";
    cout<<reverse_string(s);
}