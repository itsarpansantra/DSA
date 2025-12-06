/*
Given two non-negative integers num1 and num2 represented as strings, return the product of num1 and num2, also represented as a string.

Note: You must not use any built-in BigInteger library or convert the inputs to integer directly.

Example 1:

Input: num1 = "2", num2 = "3"
Output: "6"
Example 2:

Input: num1 = "123", num2 = "456"
Output: "56088"
*/
# include<iostream>
# include<string>
# include<vector>
using namespace std;

string calculate(string num1, string num2) {
    if (num1 == "0" || num2 == "0") return "0";

    int n = num1.size(), m = num2.size();
    vector<int> result(n + m, 0);

    // Multiply digit by digit (like on paper)
    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + result[i + j + 1];
            result[i + j + 1] = sum % 10;
            result[i + j] += sum / 10;
        }
    }

    // Convert result to string (skip leading zeros)
    string ans = "";
    for (int num : result) {
        if (!(ans.empty() && num == 0)) {
            ans.push_back(num + '0');
        }
    }

    if (ans.empty()) return "0";
    return ans;
}
int main(){
    string s ="2";
    string p = "3";
    cout<<calculate(s,p);
}