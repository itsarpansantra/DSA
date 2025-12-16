/*
Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

 

Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
 
*/
# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
void reverse_string(vector<string>&str){
    reverse(str.begin(),str.end());
}
int main(){
    vector<string>str;
    str.push_back("h");
    str.push_back("e");
    str.push_back("l");
    str.push_back("l");
    str.push_back("o");
    reverse_string(str);
    for(int i=0;i<str.size();i++){
        cout<<str[i]<<" ";
    }
}