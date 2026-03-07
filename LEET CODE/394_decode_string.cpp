/*
Given an encoded string, return its decoded string.

The encoding rule is: k[encoded_string], where the encoded_string inside the square brackets is being repeated exactly k times. Note that k is guaranteed to be a positive integer.

You may assume that the input string is always valid; there are no extra white spaces, square brackets are well-formed, etc. Furthermore, you may assume that the original data does not contain any digits and that digits are only for those repeat numbers, k. For example, there will not be input like 3a or 2[4].

The test cases are generated so that the length of the output will never exceed 105.

 

Example 1:

Input: s = "3[a]2[bc]"
Output: "aaabcbc"
Example 2:

Input: s = "3[a2[c]]"
Output: "accaccacc"
Example 3:

Input: s = "2[abc]3[cd]ef"
Output: "abcabccdcdcdef"
*/
# include<iostream>
# include<stack>
using namespace std;
string decode(string str){
    stack<string>op;
    stack<int>st;
    int num =0;
    for(int i=0;i<str.size();i++){
        if(str[i] >= '0' && str[i] <= '9'){
            num = num * 10 + (str[i] - '0');
        }
        else {
            if(str[i]=='[') {
                st.push(num);
                num=0;
                op.push("[");
            }
            else if(str[i]>='a' && str[i]<='z') {
                string t = "";
                t+=str[i];
                op.push(t);
            }
            else if(str[i]==']'){
                string temp ="";
                while(!op.empty() && op.top()!="["){
                    temp = op.top()+temp;
                    op.pop();
                }
                op.pop();

                int k = st.top();
                st.pop();
                string res="";
                for(int j=0;j<k;j++){
                    res+=temp;
                }
                op.push(res);
            }
        }

    }

    string s="";
    while (!op.empty()){
        s=op.top()+s;
        op.pop();
    }
    
    return s;
}
int main(){
    string str = "2[abc]3[cd]ef";
    cout<<decode(str);
}