/*
Given a number n, generate bit patterns from 0 to 2(n-1) such that successive patterns differ by one bit. 
A Gray code sequence must begin with 0.
 
Examples:
Input: n = 2
Output: ["00", "01", "11", "10"]
Explanation: 
00 and 01 differ by one bit.
01 and 11 differ by one bit.
11 and 10 also differ by one bit.
Input: n = 3
Output: ["000", "001", "011", "010", "110", "111", "101", "100"]
Explanation:
000 and 001 differ by one bit.
001 and 011 differ by one bit.
011 and 010 differ by one bit.
Similarly, every successive pattern 
differs by one bit.
*/
# include<bits/stdc++.h>
using namespace std;
vector<string>gray(int n){
    if (n == 1) return {"0", "1"};
        
    vector<string> prev = graycode(n - 1);
    vector<string> ans;
        
    // prefix 0
    for (auto &s : prev) {
        ans.push_back("0" + s);
    }
        
    // prefix 1 (reverse order)
    for (int i = prev.size() - 1; i >= 0; i--) {
        ans.push_back("1" + prev[i]);
    }
        
    return ans;
}
int main(){
    int n =2;
    vector<string>v = gray(n);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}