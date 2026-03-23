/*
Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.

For example:

A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
...
 

Example 1:

Input: columnNumber = 1
Output: "A"
Example 2:

Input: columnNumber = 28
Output: "AB"
Example 3:

Input: columnNumber = 701
Output: "ZY"
*/
# include<bits/stdc++.h>
using namespace std;
string excel_sheet(int n){
    string ans="";
    while(n>0){
        n--; // adjust 1 base index . means 0->A , 1->B .....
        // no charector find
        char ch = (n%26)+'A';
        ans+=ch;
        n/=26;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    int n;
    cout<<"Enter columnNumber: ";
    cin>>n;
    cout<<excel_sheet(n)
}