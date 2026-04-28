/*
Given a string s of length n consisting of uppercase English letters and an integer k, you are allowed to perform at most k operations.  In each operation, you can change any character of the string to any other uppercase English letter.

Determine the length of the longest substring that can be transformed into a string with all identical characters after performing at most k such operations.

Examples:

Input: s = "ABBA", k = 2 
Output: 4 
Explanation: The string "ABBA" can be fully converted into the same character using at most 2 changes. By replacing both 'A' with 'B', it becomes "BBBB". Hence, the maximum length is 4.
Input: s = "ADBD", k = 1
Output: 3
Explanation: In the string "ADBD", we can make at most 1 change. By changing 'B' to 'D', the string becomes "ADDD", which contains a substring "DDD" of length 3.
*/
# include<bits/stdc++.h>
using namespace std;
int longest_repeating_charector(string s,int k){
    vector<int> freq(26, 0);
    int l = 0, maxFreq = 0, maxLen = 0;

    for (int r = 0; r < s.size(); r++) {
        freq[s[r] - 'A']++;
        
        maxFreq = max(maxFreq, freq[s[r] - 'A']);
        
        int windowSize = r - l + 1;
        
        //if invalid
        if (windowSize - maxFreq > k) {
            freq[s[l] - 'A']--;
            l++;
        }
        
        maxLen = max(maxLen, r - l + 1);
    }
    
    return maxLen;
}
int main(){
    string s = "ABBA";
    int k = 2;
    cout<<longest_repeating_charector(s,k);
}