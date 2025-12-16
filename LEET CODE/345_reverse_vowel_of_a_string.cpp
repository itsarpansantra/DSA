/*
Example 1:

Input: s = "IceCreAm"

Output: "AceCreIm"

Explanation:

The vowels in s are ['I', 'e', 'e', 'A']. On reversing the vowels, s becomes "AceCreIm".

Example 2:

Input: s = "leetcode"

Output: "leotcede"
*/
# include<iostream>
# include<algorithm>
# include<vector>
using namespace std;
string check(string str){
    int n = str.size();
    string s="";
    vector<int>v;
    for(int i=0;i<str.size();i++){
        char ch = str[i];
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            s+=ch;
            v.push_back(i);
        }
    }
    reverse(s.begin(),s.end());
    for(int i=0;i<v.size();i++){
        str[v[i]]=s[i];
    }
    return str;
}
int main(){
    string str = "lYmpH";
    cout<<check(str);
}