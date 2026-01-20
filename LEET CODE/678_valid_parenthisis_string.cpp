/*
Given a string s containing only three types of characters: '(', ')' and '*', return true if s is valid.

The following rules define a valid string:

Any left parenthesis '(' must have a corresponding right parenthesis ')'.
Any right parenthesis ')' must have a corresponding left parenthesis '('.
Left parenthesis '(' must go before the corresponding right parenthesis ')'.
'*' could be treated as a single right parenthesis ')' or a single left parenthesis '(' or an empty string "".
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "(*)"
Output: true
Example 3:

Input: s = "(*))"
Output: true
*/
# include<iostream>
# include<stack>
using namespace std;
bool parenthis(string s){
    int low =0,high =0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            low++;high++;
        }
        else if(s[i]==')'){
            low--;high--;
        }
        else{ // *
            low--; high++;
        }
        if(high<0) return false;
        if(low<0) low = 0;
    }
    return low==0;
}
int main(){
    string s="(*)";
    cout<<parenthis(s);
}