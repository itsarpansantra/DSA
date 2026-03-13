/*
iven a string s containing only digits, your task is to restore it by returning all possible valid IP address combinations. You can return your answer in any order.

A valid IP address must be in the form of A.B.C.D, where A, B, C, and D are numbers from 0-255(inclusive).

Note: The numbers cannot be 0 prefixed unless they are 0. For example, 1.1.2.11 and 0.11.21.1 are valid IP addresses while 01.1.2.11 and 00.11.21.1 are not.
If there are no possible valid IP address return an empty list. The driver code will print -1 in this case.

Examples:

Input: s = “255678166”
Output: [“25.56.78.166”, “255.6.78.166”, “255.67.8.166”, “255.67.81.66”]
Explanation: These are the only valid possible IP addresses.
Input: s = “25505011535”
Output: []
Explanation: We cannot generate a valid IP address with this string.
*/
# include<iostream>
# include<vector>
using namespace std;
bool valid(string s) {
    if (s.size() > 1 && s[0] == '0') return false;
    int num = stoi(s);
    return num >= 0 && num <= 255;
}

void solve(string s, int index, int part, string curr, vector<string>& ans) {
    if (part == 4 && index == s.size()) {
        curr.pop_back(); // remove last dot
        ans.push_back(curr);
        return;
    }
    if (part == 4 || index == s.size())return;
    for (int len = 1; len <= 3 && index + len <= s.size(); len++) {
        string temp = s.substr(index, len);
        if (valid(temp)) {
            solve(s, index + len, part + 1, curr + temp + ".", ans);
        }
    }
}

vector<string> generateIp(string &s) {
    vector<string> ans;
    solve(s, 0, 0, "", ans);
    return ans;
}
int main(){
    string s = "255678166";
    vector<string>p = generateIp(s);
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
}