/*
You are given a string s consisting of lowercase characters and an integer k, You have to count all possible substrings that have exactly k distinct characters.

Examples :

Input: s = "abc", k = 2
Output: 2
Explanation: Possible substrings are ["ab", "bc"]
Input: s = "aba", k = 2
Output: 3
Explanation: Possible substrings are ["ab", "ba", "aba"]
Input: s = "aa", k = 1
Output: 3
Explanation: Possible substrings are ["a", "a", "aa"]
*/

# include<iostream>
# include<vector>
# include<climits>
using namespace std;
int atMostK(string &s, int k) {
    if (k == 0) return 0;
    int freq[26] = {0};
    int left = 0, distinct = 0;
    long long ans = 0;
    for (int right = 0; right < s.size(); right++) {
        if (freq[s[right] - 'a'] == 0)
            distinct++;
        freq[s[right] - 'a']++;
        while (distinct > k) {
            freq[s[left] - 'a']--;
            if (freq[s[left] - 'a'] == 0)
                distinct--;
            left++;
        }
        ans += (right - left + 1);
    }
    return ans;
}
int count_subarray(vector<int>& arr, int k) {
return atMostK(arr, k) - atMostK(arr, k - 1);
}
int main(){
    vector<int>v = {2, 2, 5, 6, 9, 2, 11};
    int k=2;
    cout<<count_subarray(v,k);
}