/*
Given an array arr[] and an integer k, the task is to find the length of longest subarray in which the count of elements greater than k is more than the count of elements less than or equal to k.

Examples:

Input: arr[] = [1, 2, 3, 4, 1], k = 2
Output: 3
Explanation: The subarray [2, 3, 4] or [3, 4, 1] satisfy the given condition, and there is no subarray of length 4 or 5 which will hold the given condition, so the answer is 3.
Input: arr[] = [6, 5, 3, 4], k = 2
Output: 4
Explanation: In the subarray [6, 5, 3, 4], there are 4 elements > 2 and 0 elements <= 2, so it is the longest subarray.
*/
#include <bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>& arr, int k) {

    int n = arr.size();
    vector<int> prefix(n + 1, 0);

    // convert to +1 / -1 and build prefix
    for (int i = 0; i < n; i++) {
        if (arr[i] > k)
            prefix[i + 1] = prefix[i] + 1;
        else
            prefix[i + 1] = prefix[i] - 1;
    }

    // store decreasing prefix indices
    stack<int> st;
    for (int i = 0; i <= n; i++) {
        if (st.empty() || prefix[i] < prefix[st.top()])
            st.push(i);
    }

    int ans = 0;

    // traverse from right
    for (int j = n; j >= 0; j--) {
        while (!st.empty() && prefix[j] > prefix[st.top()]) {
            ans = max(ans, j - st.top());
            st.pop();
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {1,2,3,4,1};
    int k = 2;
    cout << longestSubarray(arr, k);
}