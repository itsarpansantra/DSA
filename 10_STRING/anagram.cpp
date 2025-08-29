//given two strings s and t return true if t is an anagram of s and oterwise false

// Input: s = "anagram", t = "nagaram"

// Output: true

// Example 2:

// Input: s = "rat", t = "car"

// Output: false
# include<iostream>
# include<algorithm>
# include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s); 
    sort(s.begin(),s.end());
    string t;
    getline(cin,t);
    sort(t.begin(),t.end());
   if(s==t) cout<<true;
   else cout<<false;
}