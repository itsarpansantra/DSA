/* Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

 

Example 1:

Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]
Example 2:

Input: n = 1
Output: ["()"]
*/

# include<iostream>
# include<string>
# include<vector>
using namespace std;
void genarate(string s , int open_b ,int close_b,int n){
    if(close_b==n){
        cout<<s<<" ";
        return ;
    }
    if(open_b<n) genarate(s+'(',open_b+1,close_b,n);
    if(close_b<open_b)genarate(s+')',open_b,close_b+1,n);
}
int main(){
    int n=3;
    genarate("",0,0,n);
}

// leet code


class Solution {
    public:
        void generate(  vector<string>&str,string ans , int op , int cl , int n){
        if(cl==n){
           str.push_back(ans);
            return ;
        }
        if(op<n) generate(str,ans+'(',op+1,cl,n);
        if(cl<op) generate(str,ans+')',op,cl+1,n);
    }
        vector<string> generateParenthesis(int n) {
            vector<string>str;
            generate(str,"",0,0,n);
            return str;
        }
    };