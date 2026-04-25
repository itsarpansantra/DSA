/*
Given string num representing a non-negative integer num, and an integer k, return the smallest possible integer after removing k digits from num.

 

Example 1:

Input: num = "1432219", k = 3
Output: "1219"
Explanation: Remove the three digits 4, 3, and 2 to form the new number 1219 which is the smallest.
Example 2:

Input: num = "10200", k = 1
Output: "200"
Explanation: Remove the leading 1 and the number is 200. Note that the output must not contain leading zeroes.
Example 3:

Input: num = "10", k = 2
Output: "0"
Explanation: Remove all the digits from the number and it is left with nothing which is 0.
*/
# include<bits/stdc++.h>
using namespace std;
string remove_digits(string num,int k){
    stack<char>st;
        
    for(char ch:num){ // remove max k digits
        while(!st.empty() && k>0 && st.top()>ch){
            st.pop();
            k--;
        }
        st.push(ch);
    }
    while(k>0 && !st.empty()){ // if still k is greater 
        st.pop();
        k--;
    }
    string ans = "";
    while(!st.empty()){ // calculate ans string
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(),ans.end()); 
    int i=0;
    while(i<ans.size() && ans[i]=='0') i++; // remove leading zero
    ans = ans.substr(i);
    if(ans.empty()) return "0"; 
    else return ans;
}
int main(){
    int num = "1432219";
    int k = 3;
    cout<<remove_digits(num,k);
}