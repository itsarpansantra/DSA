/*
You are given a string num representing a large integer. An integer is good if it meets the following conditions:

It is a substring of num with length 3.
It consists of only one unique digit.
Return the maximum good integer as a string or an empty string "" if no such integer exists.

Note:

A substring is a contiguous sequence of characters within a string.
There may be leading zeroes in num or a good integer.
 

Example 1:

Input: num = "6777133339"
Output: "777"
Explanation: There are two distinct good integers: "777" and "333".
"777" is the largest, so we return "777".
*/

#include <bits/stdc++.h>
using namespace std;

string largestGoodInteger(string num) {
    string ans = "";
    for (int i = 0; i + 2 < num.size(); i++) {
        if (num[i] == num[i+1] && num[i] == num[i+2]) {
            string sub = num.substr(i, 3);
            if (sub > ans) ans = sub;
        }
    }
    return ans;
}

int main() {
    cout << largestGoodInteger("6777133339") << "\n"; // "777"
    cout << largestGoodInteger("2300019") << "\n";    // "000"
    cout << largestGoodInteger("42352338") << "\n";   // ""
}