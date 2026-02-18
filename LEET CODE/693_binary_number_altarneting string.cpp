/*
Given a positive integer, check whether it has alternating bits: namely, if two adjacent bits will always have different values.

 

Example 1:

Input: n = 5
Output: true
Explanation: The binary representation of 5 is: 101
Example 2:

Input: n = 7
Output: false
Explanation: The binary representation of 7 is: 111.
Example 3:

Input: n = 11
Output: false
Explanation: The binary representation of 11 is: 1011.
*/
# include<iostream>
using namespace std;
bool altarnet(int n){
    string ans ="";
    while(n>0){
        if(n%2==0) ans+='0';
        else ans+='1';
        n/=2;
    }
    for(int i=0;i<ans.size()-1;i++){
        if(ans[i]==ans[i+1]) return false;
    }
    return true;
}
int main(){
    int n =11;
    cout<<altarnet(n);
}