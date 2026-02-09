/*
You are given an integer n. We reorder the digits in any order (including the original order) such that the leading digit is not zero.

Return true if and only if we can do this so that the resulting number is a power of two.

 

Example 1:

Input: n = 1
Output: true
Example 2:

Input: n = 10
Output: false
*/

# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
string getDigits(int x) {
    string s = to_string(x);
    sort(s.begin(), s.end());
    return s;
}

bool reorderedPowerOf2(int n) {
    string target = getDigits(n);   // sorted digits of n
    bool flag = false;

    // check all powers of 2 up to 2^30
    for (int i = 0; i < 31; i++) {
        int power = 1 << i;
        if (getDigits(power) == target) {
            flag = true;
            break;
        }
    }
    return flag;
}
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<reorderedPowerOf2(n);
}