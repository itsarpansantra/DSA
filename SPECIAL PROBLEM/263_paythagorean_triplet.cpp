/*
Given an array arr[], return true if there is a triplet (a, b, c) from the array (where a, b, and c are on different indexes) that satisfies a2 + b2 = c2, otherwise return false.

Examples:

Input: arr[] = [3, 2, 4, 6, 5]
Output: true
Explanation: a=3, b=4, and c=5 forms a pythagorean triplet.
Input: arr[] = [3, 8, 5]
Output: false
Explanation: No such triplet possible.
Input: arr[] = [1, 1, 1]
Output: false
*/
# include<iostream>
# include<vector>
using namespace std;
bool triplet(vector<int>&arr){
    int max_val = 0;
    for (int x : arr) max_val = max(max_val, x);

    // Step 1: Create a frequency array
    vector<int> freq(max_val + 1, 0);
    for (int x : arr) freq[x]++;

    // Step 2: Iterate through all possible values of 'a' and 'b'
    for (int i = 1; i <= max_val; i++) {
        if (freq[i] == 0) continue; // 'a' doesn't exist

        for (int j = 1; j <= max_val; j++) {
            if (freq[j] == 0 || (i == j && freq[i] < 2)) continue; // 'b' doesn't exist

            // Calculate c^2 = a^2 + b^2
            int val = i * i + j * j;
            int c = sqrt(val);

            // Check if c is a perfect square and exists in our frequency array
            if (c * c == val && c <= max_val && freq[c] > 0) {
                return true;
            }
        }
    }
    return false;
}
int main(){
    vector<int>v = {3, 2, 4, 6, 5};
    cout<<triplet(v);
}