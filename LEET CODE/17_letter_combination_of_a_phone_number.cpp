/*
Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.


 

Example 1:

Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
Example 2:

Input: digits = "2"
Output: ["a","b","c"]
*/
# include<bits/stdc++.h>
using namespace std;
void solve(string &digits ,vector<string>&v ,vector<string>&ans,string cur,int idx ){
    if(idx==digits.size()){
        ans.push_back(cur);
        return;
    }
    string letter = v[digits[idx]-'0'];
    for(char ch:letter){
        solve(digits,v,ans,cur+ch,idx+1);
    }
}
vector<string> check(string str){
    if(digits.size()==0) return {};
    vector<string>v = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string>ans;
    solve(digits,v,ans,"",0);
    return ans;
}
int main(){
    string str = "23";
    vector<string>p = check(str);
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
}