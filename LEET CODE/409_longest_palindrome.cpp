/*
Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.

Letters are case sensitive, for example, "Aa" is not considered a palindrome.

 

Example 1:

Input: s = "abccccdd"
Output: 7
Explanation: One longest palindrome that can be built is "dccaccd", whose length is 7.
Example 2:

Input: s = "a"
Output: 1
Explanation: The longest palindrome that can be built is "a", whose length is 1.
 

Constraints:

1 <= s.length <= 2000
s consists of lowercase and/or uppercase English letters only.
*/
# include<bits/stdc++.h>
using namespace std;
int longest_palindrome(string str){
    vector<int>freq(128,0);

    for(char ch:s){
        freq[ch]++;
    }
    bool check = false;
    int length = 0;

    for(int f:freq){
        if(f%2==0) length+=f;
        else{
            length+=(f-1);
            check=true;
        }
    }
    if(check) length+=1;
    return length;
}
int main(){
    string str="abccccdd";
    cout<<longest_palindrome(str);
}