/*
Given a string s, return the lexicographically largest string that can be obtained by swapping at most one pair of characters in s.

Examples:

Input: s = "768"
Output: "867"
Explanation: Swapping the 1st and 3rd characters(7 and 8 respectively), gives the lexicographically largest string.
Input: s = "333"
Output: "333"
Explanation: Performing any swaps gives the same result i.e "333".
*/
# include<iostream>
using namespace std;
string max_string(string str){
    int n = str.size();
    for(int i=0;i<n;i++){
        int pos =i;
        for(int j=i+1;j<n;j++){
            if(str[j]>=str[pos]) pos = j;
        }
        if(str[pos]>s[i]){
            swap(str[pos],str[i]);
            break;
        }
    }
    return str;
}
int main(){
    string str = "768";
    cout<<max_string(str);
}