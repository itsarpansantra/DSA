/*
Given a binary string s ​​​​​without leading zeros, return true​​​ if s contains at most one contiguous segment of ones. Otherwise, return false.

 

Example 1:

Input: s = "1001"
Output: false
Explanation: The ones do not form a contiguous segment.
Example 2:

Input: s = "110"
Output: true

// s = "110011" . this is false because it has 2 segment of 1s 
*/
# include<iostream>
using namespace std;
bool check(string s){
    for(int int i=1;i<s.size();i++){
        if(s[i]=='1' && s[i-1]=='0') return false;
    }
    return true;
}
int main(){
    string s = "110";
    cout<<check(s);
}