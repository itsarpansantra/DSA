/*
Given a string s consisting of only lowercase alphabets, for each index i in the string (0 ≤ i < n), find the first non-repeating character in the prefix s[0..i]. If no such character exists, use '#'.

Examples:

Input: s = "aabc"
Output: a#bb
Explanation: 
At i=0 ("a"): First non-repeating character is 'a'.
At i=1 ("aa"): No non-repeating character, so '#'.
At i=2 ("aab"): First non-repeating character is 'b'.
At i=3 ("aabc"): Non-repeating characters are 'b' and 'c'; 'b' appeared first, so 'b'. 
Input: s = "bb" 
Output: "b#" 
Explanation: 
At i=0 ("b"): First non-repeating character is 'b'.
At i=1 ("bb"): No non-repeating character, so '#'.
*/
/*
1. Maintain a frequency array freq[26] for characters 'a' to 'z'.

2. Maintain a queue (or list) that keeps characters in the order they appear.

3. For each character s[i]:

Increment its frequency.

Push it into the queue.

While the front of the queue has frequency > 1, remove it (because it is repeating).

If the queue is empty → no non-repeating character, append '#'.

Else → the front of the queue is the first non-repeating character, append it.
*/
# include<iostream>
# include<queue>
# include<string>
# include<vector>
using namespace std;
string non_repeating(string s){
    vector<int>freq(26,0); // 26 charector count every frequency 
    queue<char>q;
    string ans ="";
    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++; // increase freqency
        q.push(s[i]); // push on queue

        while(!q.empty() && freq[q.front()-'a'] >1){
            q.pop(); // if frequency of element is greter than 1 so pop it 
        }
        if(q.empty()) ans+="#"; 
        else ans+=q.front();
    }
    return ans;
}
int main(){
    string s = "aabc";
    cout<<non_repeating(s);
}